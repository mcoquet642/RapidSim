#!/bin/bash

export RAPIDSIM_ROOT=@bindir@/..

mkdir -p plots

echo "RAPIDSIM_ROOT points to ${RAPIDSIM_ROOT}"

RapidSim.exe ${RAPIDSIM_ROOT}/validation/B2Kee 1000
#RapidSim.exe ${RAPIDSIM_ROOT}/validation/Bs2Jpsiphi 1000
#RapidSim.exe ${RAPIDSIM_ROOT}/validation/Bd2D0rho0 1000
#RapidSim.exe ${RAPIDSIM_ROOT}/validation/Bs2D0Kpi 1000
#RapidSim.exe ${RAPIDSIM_ROOT}/validation/D02Kpi 1000
#RapidSim.exe ${RAPIDSIM_ROOT}/validation/Lb2chicpK 1000

