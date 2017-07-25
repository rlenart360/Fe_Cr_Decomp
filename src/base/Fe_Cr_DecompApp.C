#include "Fe_Cr_DecompApp.h"
#include "Moose.h"
#include "AppFactory.h"
#include "ModulesApp.h"
#include "MooseSyntax.h"

template <>
InputParameters
validParams<Fe_Cr_DecompApp>()
{
  InputParameters params = validParams<MooseApp>();
  return params;
}

Fe_Cr_DecompApp::Fe_Cr_DecompApp(InputParameters parameters) : MooseApp(parameters)
{
  Moose::registerObjects(_factory);
  ModulesApp::registerObjects(_factory);
  Fe_Cr_DecompApp::registerObjects(_factory);

  Moose::associateSyntax(_syntax, _action_factory);
  ModulesApp::associateSyntax(_syntax, _action_factory);
  Fe_Cr_DecompApp::associateSyntax(_syntax, _action_factory);
}

Fe_Cr_DecompApp::~Fe_Cr_DecompApp() {}

// External entry point for dynamic application loading
extern "C" void
Fe_Cr_DecompApp__registerApps()
{
  Fe_Cr_DecompApp::registerApps();
}
void
Fe_Cr_DecompApp::registerApps()
{
  registerApp(Fe_Cr_DecompApp);
}

// External entry point for dynamic object registration
extern "C" void
Fe_Cr_DecompApp__registerObjects(Factory & factory)
{
  Fe_Cr_DecompApp::registerObjects(factory);
}
void
Fe_Cr_DecompApp::registerObjects(Factory & factory)
{
}

// External entry point for dynamic syntax association
extern "C" void
Fe_Cr_DecompApp__associateSyntax(Syntax & syntax, ActionFactory & action_factory)
{
  Fe_Cr_DecompApp::associateSyntax(syntax, action_factory);
}
void
Fe_Cr_DecompApp::associateSyntax(Syntax & /*syntax*/, ActionFactory & /*action_factory*/)
{
}
