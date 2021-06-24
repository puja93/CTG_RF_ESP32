#include <Arduino.h>
#include "model.h"
#include "test_data.h"
#include <time.h>

//NeuralNetwork *nn;
Eloquent::ML::Port::RandomForest classifier;
char buffer[50]; //placeholder for printing format

void evaluate(int cm[3][3]){
  //cm is confusion matrix,
  //True label in row, Predicted label in column

  //Calculate all metrics
  int support_normal = cm[0][0] + cm[0][1] + cm[0][2];
  float precision_normal = (float) cm[0][0]/(support_normal);
  float recall_normal = (float) cm[0][0]/(cm[0][0] + cm[1][0] + cm[2][0]);
  float f1_normal = 2*precision_normal*recall_normal/(
    precision_normal + recall_normal);

  int support_suspect = cm[1][0] + cm[1][1] + cm[1][2];
  float precision_suspect = (float) cm[1][1]/(support_suspect);
  float recall_suspect = (float) cm[1][1]/(cm[0][1] + cm[1][1] + cm[2][1]);
  float f1_suspect = 2*precision_suspect*recall_suspect/(
    precision_suspect + recall_suspect);

  int support_pathologic = cm[2][0] + cm[2][1] + cm[2][2];
  float precision_pathologic = (float) cm[2][2]/(support_pathologic);
  float recall_pathologic = (float) cm[2][2]/(cm[0][2] + cm[1][2] + cm[2][2]);
  float f1_pathologic = 2*precision_pathologic*recall_pathologic/(
    precision_pathologic + recall_pathologic);

  int weighted_support = support_normal + support_suspect + 
    support_pathologic;
  float weighted_precision = (support_normal*precision_normal + 
    support_suspect*precision_suspect + 
    support_pathologic*precision_pathologic)/weighted_support;
  float weighted_recall = (support_normal*recall_normal + 
    support_suspect*recall_suspect + 
    support_pathologic*recall_pathologic)/weighted_support;
  float weighted_f1 = (support_normal*f1_normal +
    support_suspect*f1_suspect + 
    support_pathologic*f1_pathologic)/weighted_support;

  float accuracy = (float)(cm[0][0] + cm[1][1] + cm[2][2])/weighted_support;

  //Print Confusion Matrix
  sprintf(buffer, "\nConfusion Matrix");
  Serial.println(buffer);
  for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
      Serial.print(cm[i][j]);
      Serial.print(" ");
    }
    Serial.println();
  }

  //Print Evaluation Metrics
  Serial.println("             Precision  Recall     F1         Support");
  Serial.print("Normal    ");
  sprintf(buffer, "   %.6f", precision_normal);
  Serial.print(buffer);
  sprintf(buffer, "   %.6f", recall_normal);
  Serial.print(buffer);
  sprintf(buffer, "   %.6f", f1_normal);
  Serial.print(buffer);
  sprintf(buffer, "   %d", support_normal);
  Serial.println(buffer);

  Serial.print("Suspect   ");
  sprintf(buffer, "   %.6f", precision_suspect);
  Serial.print(buffer);
  sprintf(buffer, "   %.6f", recall_suspect);
  Serial.print(buffer);
  sprintf(buffer, "   %.6f", f1_suspect);
  Serial.print(buffer);
  sprintf(buffer, "   %d", support_suspect);
  Serial.println(buffer);

  Serial.print("Pathologic");
  sprintf(buffer, "   %.6f", precision_pathologic);
  Serial.print(buffer);
  sprintf(buffer, "   %.6f", recall_pathologic);
  Serial.print(buffer);
  sprintf(buffer, "   %.6f", f1_pathologic);
  Serial.print(buffer);
  sprintf(buffer, "   %d", support_pathologic);
  Serial.println(buffer);

  Serial.print("Weighted  ");
  sprintf(buffer, "   %.6f", weighted_precision);
  Serial.print(buffer);
  sprintf(buffer, "   %.6f", weighted_recall);
  Serial.print(buffer);
  sprintf(buffer, "   %.6f", weighted_f1);
  Serial.print(buffer);
  sprintf(buffer, "   %d", weighted_support);
  Serial.println(buffer);

  //Print Accuracy
  sprintf(buffer,"\nAccuracy: %.6f", accuracy);
  Serial.println(buffer);
}

void classify() {

  int confusion_matrix[3][3] = {0};
  int row = sizeof(x_test) / sizeof(x_test[0]);
  int n_features = sizeof x_test[0] / sizeof(int);
  float x_sample[n_features];
  int y_sample;
  int y_predict, true_idx, pred_idx;
  const char * label;
  const char * class_map[] = {"Normal", "Suspect", "Pathologic"};

  for (int i=0; i<row; i++){
    for (int j=0; j<n_features; j++){
      x_sample[j] = x_test[i][j];
    }
    y_sample = y_test[i];
    y_predict = classifier.predict(x_sample);

    true_idx = y_sample - 1;
    pred_idx = y_predict - 1;
    confusion_matrix[true_idx][pred_idx]+=1;

    label = classifier.predictLabel(x_sample);
    sprintf(buffer, "Actual:%s, Predicted:%s", class_map[true_idx], label);
    Serial.println(buffer);
  }
  evaluate(confusion_matrix);

} 

void setup()
{
  Serial.begin(115200);
  delay(2000);

  clock_t start, end;
  start = clock();
  classify();
  end = clock();

  double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
  sprintf(buffer, "\n\nExecution Time: %3f second", time_taken);
  Serial.println(buffer);
}

void loop()
{
}