<?php
// $Id$

/**
 * MediaMosa is Open Source Software to build a Full Featured, Webservice
 * Oriented Media Management and Distribution platform (http://mediamosa.org)
 *
 * Copyright (C) 2011 SURFnet BV (http://www.surfnet.nl) and Kennisnet
 * (http://www.kennisnet.nl)
 *
 * MediaMosa is based on the open source Drupal platform and
 * was originally developed by Madcap BV (http://www.madcap.nl)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, you can find it at:
 * http://www.gnu.org/licenses/old-licenses/gpl-2.0.html
 */

 /**
  * @file
  * User favorite DB class.
  */

class mediamosa_user_favorite_db {
  // ------------------------------------------------------------------ Consts.
  // Table name;
  const TABLE_NAME = 'mediamosa_user_favorite'; // 1.x name quota_user.

  // Database fields;
  const NAME = 'name';
  const NAME_LENGTH = 255;
  const APP_ID = 'app_id';
  const FAV_TYPE = 'fav_type';
  const FAV_TYPE_ASSET = 'ASSET';
  const FAV_TYPE_COLLECTION = 'COLLECTION';
  const FAV_ID = 'fav_id';
  const FAV_ID_LENGTH = mediamosa_db::HASH_ID_LENGTH;
}
