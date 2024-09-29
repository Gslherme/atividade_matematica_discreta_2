cmake_minimum_required(VERSION 3.29)
project(atividade_matematica_discreta_2 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(atividade_matematica_discreta_2
        perm_simples.h
    matdisc_2.c
        arranjo_simples.h
        fat.h)
