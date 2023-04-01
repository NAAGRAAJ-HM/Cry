/******************************************************************************/
/* File   : McalCry.cpp                                                       */
/*                                                                            */
/* Author : Nagaraja HULIYAPURADA MATA                                        */
/*                                                                            */
/* License / Warranty / Terms and Conditions                                  */
/*                                                                            */
/* Everyone is permitted to copy and distribute verbatim copies of this lice- */
/* nse document, but changing it is not allowed. This is a free, copyright l- */
/* icense for software and other kinds of works. By contrast, this license is */
/* intended to guarantee your freedom to share and change all versions of a   */
/* program, to make sure it remains free software for all its users. You have */
/* certain responsibilities, if you distribute copies of the software, or if  */
/* you modify it: responsibilities to respect the freedom of others.          */
/*                                                                            */
/* All rights reserved. Copyright © 1982 Nagaraja HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/NagarajaHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "McalCry.hpp"
#include "infMcalCry_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_McalCry, MCALCRY_VAR) McalCry;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, MCALCRY_CODE) module_McalCry::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, MCALCRY_CONST,       MCALCRY_APPL_CONST) lptrNvMBlocksRomModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   MCALCRY_CONFIG_DATA, MCALCRY_APPL_CONST) lptrCfgModule
){
#if(STD_ON == McalCry_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrNvMBlocksRomModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrNvMBlocksRom = lptrNvMBlocksRomModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == McalCry_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == McalCry_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == McalCry_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALCRY_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALCRY_CODE) module_McalCry::DeInitFunction(
   void
){
#if(STD_ON == McalCry_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalCry_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == McalCry_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALCRY_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALCRY_CODE) module_McalCry::MainFunction(
   void
){
#if(STD_ON == McalCry_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalCry_InitCheck)
   }
   else{
#if(STD_ON == McalCry_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALCRY_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALCRY_CODE) module_McalCry::ProcessJob(
   void
){
}

FUNC(void, MCALCRY_CODE) module_McalCry::McalCancelJob(
   void
){
}

FUNC(void, MCALCRY_CODE) module_McalCry::KeyElementSet(
   void
){
}

FUNC(void, MCALCRY_CODE) module_McalCry::KeyValidSet(
   void
){
}

FUNC(void, MCALCRY_CODE) module_McalCry::KeySetValid(
   void
){
}

FUNC(void, MCALCRY_CODE) module_McalCry::KeyElementGet(
   void
){
}

FUNC(void, MCALCRY_CODE) module_McalCry::KeyElementCopy(
   void
){
}

FUNC(void, MCALCRY_CODE) module_McalCry::KeyCopy(
   void
){
}

FUNC(void, MCALCRY_CODE) module_McalCry::KeyElementIdsGet(
   void
){
}

FUNC(void, MCALCRY_CODE) module_McalCry::RandomSeed(
   void
){
}

FUNC(void, MCALCRY_CODE) module_McalCry::KeyGenerate(
   void
){
}

FUNC(void, MCALCRY_CODE) module_McalCry::KeyDerive(
   void
){
}

FUNC(void, MCALCRY_CODE) module_McalCry::KeyExchangeCalcPubVal(
   void
){
}

FUNC(void, MCALCRY_CODE) module_McalCry::KeyExchangeCalcSecret(
   void
){
}

FUNC(void, MCALCRY_CODE) module_McalCry::CertificateParse(
   void
){
}

FUNC(void, MCALCRY_CODE) module_McalCry::CertificateVerify(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

