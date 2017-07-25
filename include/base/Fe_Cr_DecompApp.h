#ifndef FE__CR__DECOMPAPP_H
#define FE__CR__DECOMPAPP_H

#include "MooseApp.h"

class Fe_Cr_DecompApp;

template <>
InputParameters validParams<Fe_Cr_DecompApp>();

class Fe_Cr_DecompApp : public MooseApp
{
public:
  Fe_Cr_DecompApp(InputParameters parameters);
  virtual ~Fe_Cr_DecompApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* FE__CR__DECOMPAPP_H */
