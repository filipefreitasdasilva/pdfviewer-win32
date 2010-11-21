#pragma once

// Las siguientes macros definen la plataforma m�nima requerida. Esta plataforma es la primera
// versi�n de Windows, Internet Explorer, etc. que tiene las caracter�sticas necesarias para ejecutar 
// la aplicaci�n. Las macros funcionan habilitando todas las caracter�sticas disponibles 
// en las versiones de la plataforma hasta la versi�n especificada, incluida esta.

// Modifique las siguientes definiciones si tiene que seleccionar como destino una plataforma antes que las especificadas a continuaci�n.
// Consulte la referencia MSDN para obtener la informaci�n m�s reciente sobre los valores correspondientes a las diferentes plataformas.
#ifndef _WIN32_WINNT
#define _WIN32_WINNT NTDDI_WINXP ///La version m�nima requerida es Windows XP
#endif