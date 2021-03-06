/**
  @file Rebuilder.h
  @class Rebuilder
  @brief Clase Abstracta que indica la forma que debe tener todo método de Ocultamiento de errores en Imágenes
  @author Christopher Arredondo Flores
  @date 28/9/2014

**/

#ifndef CLASS_REBUILDER
#define CLASS_REBUILDER

#include "Images.h"

class Rebuilder{

public:

	virtual void hidden(Images* img, bool show_data)=0;

};

#endif