#pragma once
#ifndef OUTPUT_TABLE_H
#define OUTPUT_TABLE_H

typedef double (*MathFunc)(double, int);

void outputTable(double start, double end, double step, int n, MathFunc func);

#endif
