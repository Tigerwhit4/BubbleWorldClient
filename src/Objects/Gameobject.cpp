/**
 * Copyright (C) 2016 Martin Ubl <http://kennny.cz>
 *
 * This file is part of BubbleWorld MMORPG engine
 *
 * BubbleWorld is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * BubbleWorld is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with BubbleWorld. If not, see <http://www.gnu.org/licenses/>.
 **/

#include "General.h"
#include "Gameobject.h"

Gameobject::Gameobject() : WorldObject(OTYPE_GAMEOBJECT)
{
    //
}

Gameobject::~Gameobject()
{
    //
}

void Gameobject::InitializeObject(uint64_t guid)
{
    WorldObject::InitializeObject(guid);
}

void Gameobject::CreateUpdateFields()
{
    WorldObject::CreateUpdateFields();

    m_updateFields = new uint32_t[GAMEOBJECT_FIELDS_END];
    memset(m_updateFields, 0, sizeof(uint32_t) * GAMEOBJECT_FIELDS_END);
}
