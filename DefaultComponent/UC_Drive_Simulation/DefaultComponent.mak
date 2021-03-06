
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug= /Zi /Od /D "_DEBUG" $(LIBCRT_FLAG)d  /Fd"$(TARGET_NAME)" 
CPPCompileRelease= /Ox /D"NDEBUG" $(LIBCRT_FLAG) /Fd"$(TARGET_NAME)" 
LinkDebug=
LinkRelease=
BuildSet=Debug
SUBSYSTEM=/SUBSYSTEM:console
RPFrameWorkDll=False
SimulinkLibName=

ConfigurationCPPCompileSwitches=   /I . /I . /I $(OMROOT)\LangCpp /I $(OMROOT)\LangCpp\oxf /nologo /W3 $(ENABLE_EH) $(CRT_FLAGS) $(CPPCompileDebug) /D "_AFXDLL" /D "WIN32" /D "_CONSOLE" /D "_MBCS" /D "_WINDOWS" $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) /c   

SIMULINK_CONFIG=False
!IF "$(SIMULINK_CONFIG)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "OM_WITH_CLEANUP"
!ENDIF


!IF "$(RPFrameWorkDll)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "FRAMEWORK_DLL"
!ENDIF

################### Compilation flags ######################
############################################################
INCLUDE_QUALIFIER=/I
DEFINE_QUALIFIER=/D

!IF "False" == "True"
MT_PREFIX=MT
LIBCRT_FLAG=/MT
!ELSE
MT_PREFIX=
LIBCRT_FLAG=/MD
!ENDIF

LIB_PREFIX=MSVC15x86$(MT_PREFIX)

CRT_FLAGS=$(DEFINE_QUALIFIER)_CRT_SECURE_NO_DEPRECATE $(DEFINE_QUALIFIER)_CRT_SECURE_NO_WARNINGS
ENABLE_EH=/EHa

WINMM_LIB=winmm.lib

################### Commands definition #########################
#################################################################
RMDIR = rmdir
LIB_CMD=link.exe -lib
LINK_CMD=link.exe
LIB_FLAGS=$(LinkDebug)  /NOLOGO   
LINK_FLAGS=$(LinkDebug)  /NOLOGO    $(SUBSYSTEM) /MACHINE:x86 

############### Generated macros #################
##################################################

FLAGSFILE=
RULESFILE=
OMROOT="C:\ProgramData\IBM\Rational\Rhapsody\8.4\Share"
RHPROOT="e:\Software\IBM Rhapsody"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.obj
EXE_EXT=.exe
LIB_EXT=.lib

INSTRUMENTATION=Animation

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=DefaultComponent

all : $(TARGET_NAME)$(EXE_EXT) DefaultComponent.mak

TARGET_MAIN=MainDefaultComponent

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/WIN32

ADDITIONAL_OBJS=

OBJS= \
  UC_Drive.obj \
  DCT.obj \
  TUesla.obj \
  Sensors.obj \
  DCLogisticEmployee.obj \
  DCLocalizationSystem.obj \
  DCLoadingEmployee.obj \
  UC_LoadingCargo.obj \
  UC_PathPlanning.obj \
  DCBoard.obj \
  UC_ManualOverride.obj \
  UC_StopCrash.obj \
  Cargo.obj \
  EnvironmentSensors.obj \
  Drive.obj \
  SecondaryActors.obj \
  Usecases.obj \
  PrimaryActors.obj \
  LoadingCargo.obj \
  PathPlanning.obj \
  ManualOverride.obj \
  StopCrash.obj




OBJ_DIR=

!IF "$(OBJ_DIR)"!=""
CREATE_OBJ_DIR=if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
CLEAN_OBJ_DIR= if exist $(OBJ_DIR) $(RMDIR) $(OBJ_DIR)
!ELSE
CREATE_OBJ_DIR=
CLEAN_OBJ_DIR=
!ENDIF

######################## Predefined macros ############################
#######################################################################
!IF "$(OBJS)" != ""
$(OBJS) : $(INST_LIBS) $(OXF_LIBS)
!ENDIF

LIB_POSTFIX=
!IF "$(BuildSet)"=="Release"
LIB_POSTFIX=R
!ENDIF

!IF "$(TARGET_TYPE)" == "Executable"
LinkDebug=$(LinkDebug) /DEBUG
LinkRelease=$(LinkRelease) /OPT:NOREF
!ELSEIF "$(TARGET_TYPE)" == "Library"
LinkDebug=$(LinkDebug)
!ENDIF


!IF "$(INSTRUMENTATION)" == "Animation"
INST_FLAGS=/D "OMANIMATOR"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS= 
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfanimdll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS= $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)aomanim$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "Tracing"
INST_FLAGS=/D "OMTRACER"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS=
OXF_LIBS= $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxftracedll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)tomtrace$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)aomtrace$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS= $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "None" 
INST_FLAGS=
INST_INCLUDES=
INST_LIBS=
!IF "$(RPFrameWorkDll)" == "True"
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfdll$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ELSE
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxf$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ENDIF
SOCK_LIB=

!ELSE
!ERROR An invalid Instrumentation $(INSTRUMENTATION) is specified.
!ENDIF



################## Generated dependencies ########################
##################################################################






UC_Drive.obj : UC_Drive.cpp UC_Drive.h    Drive.h DCT.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UC_Drive.obj" "UC_Drive.cpp" 



DCT.obj : DCT.cpp DCT.h    SecondaryActors.h TUesla.h UC_LoadingCargo.h UC_ManualOverride.h UC_StopCrash.h UC_Drive.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DCT.obj" "DCT.cpp" 



TUesla.obj : TUesla.cpp TUesla.h    DCT.h Sensors.h DCLogisticEmployee.h Cargo.h DCLocalizationSystem.h EnvironmentSensors.h DCBoard.h DCLoadingEmployee.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"TUesla.obj" "TUesla.cpp" 



Sensors.obj : Sensors.cpp Sensors.h    SecondaryActors.h TUesla.h UC_StopCrash.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Sensors.obj" "Sensors.cpp" 



DCLogisticEmployee.obj : DCLogisticEmployee.cpp DCLogisticEmployee.h    PrimaryActors.h TUesla.h UC_ManualOverride.h UC_StopCrash.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DCLogisticEmployee.obj" "DCLogisticEmployee.cpp" 



DCLocalizationSystem.obj : DCLocalizationSystem.cpp DCLocalizationSystem.h    SecondaryActors.h TUesla.h UC_LoadingCargo.h UC_PathPlanning.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DCLocalizationSystem.obj" "DCLocalizationSystem.cpp" 



DCLoadingEmployee.obj : DCLoadingEmployee.cpp DCLoadingEmployee.h    PrimaryActors.h TUesla.h UC_LoadingCargo.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DCLoadingEmployee.obj" "DCLoadingEmployee.cpp" 



UC_LoadingCargo.obj : UC_LoadingCargo.cpp UC_LoadingCargo.h    LoadingCargo.h DCLoadingEmployee.h DCLocalizationSystem.h DCT.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UC_LoadingCargo.obj" "UC_LoadingCargo.cpp" 



UC_PathPlanning.obj : UC_PathPlanning.cpp UC_PathPlanning.h    PathPlanning.h DCLocalizationSystem.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UC_PathPlanning.obj" "UC_PathPlanning.cpp" 



DCBoard.obj : DCBoard.cpp DCBoard.h    SecondaryActors.h TUesla.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DCBoard.obj" "DCBoard.cpp" 



UC_ManualOverride.obj : UC_ManualOverride.cpp UC_ManualOverride.h    ManualOverride.h DCT.h DCLogisticEmployee.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UC_ManualOverride.obj" "UC_ManualOverride.cpp" 



UC_StopCrash.obj : UC_StopCrash.cpp UC_StopCrash.h    StopCrash.h DCLogisticEmployee.h DCT.h Sensors.h ManualOverride.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UC_StopCrash.obj" "UC_StopCrash.cpp" 



Cargo.obj : Cargo.cpp Cargo.h    SecondaryActors.h TUesla.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Cargo.obj" "Cargo.cpp" 



EnvironmentSensors.obj : EnvironmentSensors.cpp EnvironmentSensors.h    SecondaryActors.h TUesla.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"EnvironmentSensors.obj" "EnvironmentSensors.cpp" 



Drive.obj : Drive.cpp Drive.h    UC_Drive.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Drive.obj" "Drive.cpp" 



SecondaryActors.obj : SecondaryActors.cpp SecondaryActors.h    Sensors.h Cargo.h EnvironmentSensors.h DCT.h DCBoard.h DCLocalizationSystem.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SecondaryActors.obj" "SecondaryActors.cpp" 



Usecases.obj : Usecases.cpp Usecases.h    TUesla.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Usecases.obj" "Usecases.cpp" 



PrimaryActors.obj : PrimaryActors.cpp PrimaryActors.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"PrimaryActors.obj" "PrimaryActors.cpp" 



LoadingCargo.obj : LoadingCargo.cpp LoadingCargo.h    UC_LoadingCargo.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"LoadingCargo.obj" "LoadingCargo.cpp" 



PathPlanning.obj : PathPlanning.cpp PathPlanning.h    UC_PathPlanning.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"PathPlanning.obj" "PathPlanning.cpp" 



ManualOverride.obj : ManualOverride.cpp ManualOverride.h    UC_ManualOverride.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ManualOverride.obj" "ManualOverride.cpp" 



StopCrash.obj : StopCrash.cpp StopCrash.h    UC_StopCrash.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"StopCrash.obj" "StopCrash.cpp" 






$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) 
	$(CPP) $(ConfigurationCPPCompileSwitches) /Fo"$(TARGET_MAIN)$(OBJ_EXT)" $(TARGET_MAIN)$(CPP_EXT)

########################## Linking instructions ###############################
###############################################################################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) DefaultComponent.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(SOCK_LIB) \
	$(WINMM_LIB) \
	$(LINK_FLAGS) /out:$(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest mt.exe -manifest $@.manifest -outputresource:$(TARGET_NAME)$(EXE_EXT);1



$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) DefaultComponent.mak
	@echo Building library $@
	$(LIB_CMD) $(LIB_FLAGS) /out:$(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS) $(LIBS)

clean:
	@echo Cleanup
	if exist UC_Drive.obj erase UC_Drive.obj
	if exist DCT.obj erase DCT.obj
	if exist TUesla.obj erase TUesla.obj
	if exist Sensors.obj erase Sensors.obj
	if exist DCLogisticEmployee.obj erase DCLogisticEmployee.obj
	if exist DCLocalizationSystem.obj erase DCLocalizationSystem.obj
	if exist DCLoadingEmployee.obj erase DCLoadingEmployee.obj
	if exist UC_LoadingCargo.obj erase UC_LoadingCargo.obj
	if exist UC_PathPlanning.obj erase UC_PathPlanning.obj
	if exist DCBoard.obj erase DCBoard.obj
	if exist UC_ManualOverride.obj erase UC_ManualOverride.obj
	if exist UC_StopCrash.obj erase UC_StopCrash.obj
	if exist Cargo.obj erase Cargo.obj
	if exist EnvironmentSensors.obj erase EnvironmentSensors.obj
	if exist Drive.obj erase Drive.obj
	if exist SecondaryActors.obj erase SecondaryActors.obj
	if exist Usecases.obj erase Usecases.obj
	if exist PrimaryActors.obj erase PrimaryActors.obj
	if exist LoadingCargo.obj erase LoadingCargo.obj
	if exist PathPlanning.obj erase PathPlanning.obj
	if exist ManualOverride.obj erase ManualOverride.obj
	if exist StopCrash.obj erase StopCrash.obj
	if exist $(TARGET_MAIN)$(OBJ_EXT) erase $(TARGET_MAIN)$(OBJ_EXT)
	if exist *$(OBJ_EXT) erase *$(OBJ_EXT)
	if exist $(TARGET_NAME).pdb erase $(TARGET_NAME).pdb
	if exist $(TARGET_NAME)$(LIB_EXT) erase $(TARGET_NAME)$(LIB_EXT)
	if exist $(TARGET_NAME).ilk erase $(TARGET_NAME).ilk
	if exist $(TARGET_NAME)$(EXE_EXT) erase $(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest erase $(TARGET_NAME)$(EXE_EXT).manifest
	$(CLEAN_OBJ_DIR)
	
