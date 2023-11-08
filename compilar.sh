#!/bin/bash
echo "Compilando..."
g++ main.cpp recursos/funciones.cpp \
ejercicios/ej00suma.cpp \
ejercicios/ej01resta.cpp \
ejercicios/ej02operaciones.cpp \
ejercicios/ej03posit.cpp \
ejercicios/ej04medpos.cpp \
ejercicios/ej05par.cpp \
ejercicios/ej06medpar.cpp \
ejercicios/ej07mate1.cpp \
ejercicios/ej08mate2.cpp \
-o bin/proyecto1
echo "Ejecutando..."
echo ""
./bin/proyecto1
echo ""
echo "Fin"
