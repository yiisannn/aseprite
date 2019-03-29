// Aseprite Document Library
// Copyright (C) 2019  Igara Studio S.A.
//
// This file is released under the terms of the MIT license.
// Read LICENSE.txt for more information.

#ifndef DOC_TILESET_IO_H_INCLUDED
#define DOC_TILESET_IO_H_INCLUDED
#pragma once

#include <iosfwd>

namespace doc {

  class CancelIO;
  class SubObjectsFromSprite;
  class Tileset;

  bool write_tileset(std::ostream& os,
                     const Tileset* tileset,
                     CancelIO* cancel = nullptr);

  Tileset* read_tileset(std::istream& is,
                        SubObjectsFromSprite* subObjects,
                        bool setId = true);

} // namespace doc

#endif
