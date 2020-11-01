#define _CRT_SECURE_NO_WARNINGS
#include <stdio.H>
#include <stdlib.H>
#include <string.H>
#include "payrolldata.h"

//This is a sample function to see how to search a table.  It is not used in the program.
float getEmployeePay(int x) {
	for (int i = 0; i < sizeof(employees) / sizeof(employees[0]); i++) {
		if (employees[i].employee_id == x) return employees[i].rate;
	}
	return 0.0;
}

float getFedAllowance(int x) {
  
};

float getStateAllowance(int x) {

};

float getMarriedBase(float x) {

};

float getSingleBase(float x) {

};

float getMarriedMinimum(float x) {

};

float getSingleMinimum(float x) {

};

float getMarriedPercent(float x) {

};

float getSinglePercent(float x) {

};

float calcGross(float hours, float rate, char salaried) {

};

float calcFedTax(char maritalStatus, float grossPay, int exemptions) {

};

float calcFICA(float grossPay) {

};

float calcState(float grossPay, float exemptions) {

};

float calcCounty(float grossPay, float exemptions, char county) {

};



int main()
{
	//Remove the following line and uncomment out the other code once you see how searching works.

	printf("Employee #132 rate of pay is %f6.2\n", getEmployeePay(132));

	/*printf("Employee_ID Gross Pay  Federal    FICA      State    County    Net Pay\n");
	printf("----------- --------- --------- --------- --------- --------- ---------\n");
	for (int i = 0; i< sizeof(employees)/sizeof(employees[0]); i++) {
		float grossPay, federalTax, FICA, stateTax, countyTax, netPay;


		grossPay = 1000.0;
		federalTax = 100;
		FICA = 20.0;
		stateTax = 10.0;
		countyTax = 5.0;
		netPay = grossPay - federalTax - FICA - stateTax - countyTax;

		printf("   %d      %9.2f %9.2f %9.2f %9.2f %9.2f %9.2f\n", employees[i].employee_id, grossPay, federalTax, FICA, stateTax, countyTax, netPay);
	}*/
	getchar();
	return 0;
}

