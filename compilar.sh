#!/bin/bash
clear
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
ejercicios/ej09refvec.cpp \
ejercicios/ej10estilos.cpp \
ejercicios/ej11multip.cpp \
ejercicios/ej12max.cpp \
-o bin/proyecto1
echo "Ejecutando..."
echo ""
./bin/proyecto1
echo ""
echo "Fin"
