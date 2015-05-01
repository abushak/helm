<?php
/**
 * @file
 * helm_agency_content.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function helm_agency_content_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Historical and Architectural Preservation',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'agency',
  'language' => 'und',
  'created' => 1427495212,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0301d23d-9445-4ba4-a7ec-0024de1d3121',
  'body' => array(),
  'field_agency_category' => array(
    'und' => array(
      0 => array(
        'target_id' => '6db4f366-30d1-4aa6-b506-5c7197298b77',
        'uuid' => '6db4f366-30d1-4aa6-b506-5c7197298b77',
      ),
    ),
  ),
  'field_agency_location' => array(
    'und' => array(
      0 => array(
        'geom' => 'POINT (-123.2636401 44.5641919)',
        'geo_type' => 'point',
        'lat' => '44.564191900000',
        'lon' => '-123.263640100000',
        'left' => '-123.263640100000',
        'top' => '44.564191900000',
        'right' => '-123.263640100000',
        'bottom' => '44.564191900000',
        'geohash' => '9rbme0djjp2pr',
      ),
    ),
  ),
  'field_agency_url' => array(
    'und' => array(
      0 => array(
        'url' => '<front>',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_agency_address' => array(
    'und' => array(
      0 => array(
        'value' => '501 Southwest Madison Avenue
Corvallis, OR 97333',
        'format' => NULL,
        'safe_value' => '501 Southwest Madison Avenue
Corvallis, OR 97333',
      ),
    ),
  ),
  'metatags' => array(),
  'path' => array(
    'pathauto' => 1,
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-03-27 22:26:52 +0000',
  'user_uuid' => '19f65a7f-f1c7-487b-b58f-acdb180ed7a7',
);
  $nodes[] = array(
  'title' => 'Fire Department',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'agency',
  'language' => 'und',
  'created' => 1427494832,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1119c708-b2b6-4735-8d7c-b34e55e58585',
  'body' => array(),
  'field_agency_category' => array(
    'und' => array(
      0 => array(
        'target_id' => 'b305ca4d-5caa-407b-bdaf-8aa4572fe928',
        'uuid' => 'b305ca4d-5caa-407b-bdaf-8aa4572fe928',
      ),
    ),
  ),
  'field_agency_location' => array(
    'und' => array(
      0 => array(
        'geom' => 'POINT (-123.2611063 44.5674707)',
        'geo_type' => 'point',
        'lat' => '44.567470700000',
        'lon' => '-123.261106300000',
        'left' => '-123.261106300000',
        'top' => '44.567470700000',
        'right' => '-123.261106300000',
        'bottom' => '44.567470700000',
        'geohash' => '9rbme1k0249w4',
      ),
    ),
  ),
  'field_agency_url' => array(
    'und' => array(
      0 => array(
        'url' => '<front>',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_agency_address' => array(
    'und' => array(
      0 => array(
        'value' => '400 NW Harrison Blvd.
Corvallis, OR 97330',
        'format' => NULL,
        'safe_value' => '400 NW Harrison Blvd.
Corvallis, OR 97330',
      ),
    ),
  ),
  'metatags' => array(),
  'path' => array(
    'pathauto' => 1,
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-03-27 22:20:32 +0000',
  'user_uuid' => '19f65a7f-f1c7-487b-b58f-acdb180ed7a7',
);
  $nodes[] = array(
  'title' => 'City Council',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'agency',
  'language' => 'und',
  'created' => 1427495084,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1135ed95-6ce5-475f-817c-b54b4ee75711',
  'body' => array(),
  'field_agency_category' => array(
    'und' => array(
      0 => array(
        'target_id' => 'f14bd036-3da8-44c1-ab6e-0a3e0cb68fd2',
        'uuid' => 'f14bd036-3da8-44c1-ab6e-0a3e0cb68fd2',
      ),
    ),
  ),
  'field_agency_location' => array(
    'und' => array(
      0 => array(
        'geom' => 'POINT (-123.2608574 44.5619717)',
        'geo_type' => 'point',
        'lat' => '44.561971700000',
        'lon' => '-123.260857400000',
        'left' => '-123.260857400000',
        'top' => '44.561971700000',
        'right' => '-123.260857400000',
        'bottom' => '44.561971700000',
        'geohash' => '9rbme0k0mce5m',
      ),
    ),
  ),
  'field_agency_url' => array(
    'und' => array(
      0 => array(
        'url' => '<front>',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_agency_address' => array(
    'und' => array(
      0 => array(
        'value' => ' PO Box 1083
Corvallis, OR 97339-1083',
        'format' => NULL,
        'safe_value' => ' PO Box 1083
Corvallis, OR 97339-1083',
      ),
    ),
  ),
  'metatags' => array(),
  'path' => array(
    'pathauto' => 1,
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-03-27 22:24:44 +0000',
  'user_uuid' => '19f65a7f-f1c7-487b-b58f-acdb180ed7a7',
);
  $nodes[] = array(
  'title' => 'Planning Commission',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'agency',
  'language' => 'und',
  'created' => 1427495150,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4b7434b5-45f1-4fd3-aff1-bd9ea5483094',
  'body' => array(),
  'field_agency_category' => array(
    'und' => array(
      0 => array(
        'target_id' => '6db4f366-30d1-4aa6-b506-5c7197298b77',
        'uuid' => '6db4f366-30d1-4aa6-b506-5c7197298b77',
      ),
    ),
  ),
  'field_agency_location' => array(
    'und' => array(
      0 => array(
        'geom' => 'POINT (-123.2636401 44.5641919)',
        'geo_type' => 'point',
        'lat' => '44.564191900000',
        'lon' => '-123.263640100000',
        'left' => '-123.263640100000',
        'top' => '44.564191900000',
        'right' => '-123.263640100000',
        'bottom' => '44.564191900000',
        'geohash' => '9rbme0djjp2pr',
      ),
    ),
  ),
  'field_agency_url' => array(
    'und' => array(
      0 => array(
        'url' => '<front>',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_agency_address' => array(
    'und' => array(
      0 => array(
        'value' => '501 Southwest Madison Avenue
Corvallis, OR 97333',
        'format' => NULL,
        'safe_value' => '501 Southwest Madison Avenue
Corvallis, OR 97333',
      ),
    ),
  ),
  'metatags' => array(),
  'path' => array(
    'pathauto' => 1,
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-03-27 22:25:50 +0000',
  'user_uuid' => '19f65a7f-f1c7-487b-b58f-acdb180ed7a7',
);
  $nodes[] = array(
  'title' => 'Public Works',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'agency',
  'language' => 'und',
  'created' => 1427494851,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5295a12d-589c-487b-91b2-58fcf59bed98',
  'body' => array(),
  'field_agency_category' => array(
    'und' => array(
      0 => array(
        'target_id' => 'b305ca4d-5caa-407b-bdaf-8aa4572fe928',
        'uuid' => 'b305ca4d-5caa-407b-bdaf-8aa4572fe928',
      ),
    ),
  ),
  'field_agency_location' => array(
    'und' => array(
      0 => array(
        'geom' => 'POINT (-123.254515 44.5756889)',
        'geo_type' => 'point',
        'lat' => '44.575688900000',
        'lon' => '-123.254515000000',
        'left' => '-123.254515000000',
        'top' => '44.575688900000',
        'right' => '-123.254515000000',
        'bottom' => '44.575688900000',
        'geohash' => '9rbme6bb1wsms',
      ),
    ),
  ),
  'field_agency_url' => array(
    'und' => array(
      0 => array(
        'url' => '<front>',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_agency_address' => array(
    'und' => array(
      0 => array(
        'value' => '1245 NE 3rd St
Corvallis, OR 97330',
        'format' => NULL,
        'safe_value' => '1245 NE 3rd St
Corvallis, OR 97330',
      ),
    ),
  ),
  'metatags' => array(),
  'path' => array(
    'pathauto' => 1,
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-03-27 22:20:51 +0000',
  'user_uuid' => '19f65a7f-f1c7-487b-b58f-acdb180ed7a7',
);
  $nodes[] = array(
  'title' => 'Youth Commission',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'agency',
  'language' => 'und',
  'created' => 1427495189,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6fc7784a-e77e-41fa-9b3b-a7c6348a169c',
  'body' => array(),
  'field_agency_category' => array(
    'und' => array(
      0 => array(
        'target_id' => '6db4f366-30d1-4aa6-b506-5c7197298b77',
        'uuid' => '6db4f366-30d1-4aa6-b506-5c7197298b77',
      ),
    ),
  ),
  'field_agency_location' => array(
    'und' => array(
      0 => array(
        'geom' => 'POINT (-123.2636401 44.5641919)',
        'geo_type' => 'point',
        'lat' => '44.564191900000',
        'lon' => '-123.263640100000',
        'left' => '-123.263640100000',
        'top' => '44.564191900000',
        'right' => '-123.263640100000',
        'bottom' => '44.564191900000',
        'geohash' => '9rbme0djjp2pr',
      ),
    ),
  ),
  'field_agency_url' => array(
    'und' => array(
      0 => array(
        'url' => '<front>',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_agency_address' => array(
    'und' => array(
      0 => array(
        'value' => '501 Southwest Madison Avenue
Corvallis, OR 97333',
        'format' => NULL,
        'safe_value' => '501 Southwest Madison Avenue
Corvallis, OR 97333',
      ),
    ),
  ),
  'metatags' => array(),
  'path' => array(
    'pathauto' => 1,
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-03-27 22:26:29 +0000',
  'user_uuid' => '19f65a7f-f1c7-487b-b58f-acdb180ed7a7',
);
  $nodes[] = array(
  'title' => 'Sustainability Commission',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'agency',
  'language' => 'und',
  'created' => 1427495169,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c17f3edd-6b64-4619-89c0-6b7ad53808dd',
  'body' => array(),
  'field_agency_category' => array(
    'und' => array(
      0 => array(
        'target_id' => '6db4f366-30d1-4aa6-b506-5c7197298b77',
        'uuid' => '6db4f366-30d1-4aa6-b506-5c7197298b77',
      ),
    ),
  ),
  'field_agency_location' => array(
    'und' => array(
      0 => array(
        'geom' => 'POINT (-123.2636401 44.5641919)',
        'geo_type' => 'point',
        'lat' => '44.564191900000',
        'lon' => '-123.263640100000',
        'left' => '-123.263640100000',
        'top' => '44.564191900000',
        'right' => '-123.263640100000',
        'bottom' => '44.564191900000',
        'geohash' => '9rbme0djjp2pr',
      ),
    ),
  ),
  'field_agency_url' => array(
    'und' => array(
      0 => array(
        'url' => '<front>',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_agency_address' => array(
    'und' => array(
      0 => array(
        'value' => '501 Southwest Madison Avenue
Corvallis, OR 97333',
        'format' => NULL,
        'safe_value' => '501 Southwest Madison Avenue
Corvallis, OR 97333',
      ),
    ),
  ),
  'metatags' => array(),
  'path' => array(
    'pathauto' => 1,
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-03-27 22:26:09 +0000',
  'user_uuid' => '19f65a7f-f1c7-487b-b58f-acdb180ed7a7',
);
  $nodes[] = array(
  'title' => 'Police',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'agency',
  'language' => 'und',
  'created' => 1427494941,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c502c265-f1f7-4fd0-beba-b6a2baaea7a7',
  'body' => array(),
  'field_agency_category' => array(
    'und' => array(
      0 => array(
        'target_id' => 'b305ca4d-5caa-407b-bdaf-8aa4572fe928',
        'uuid' => 'b305ca4d-5caa-407b-bdaf-8aa4572fe928',
      ),
    ),
  ),
  'field_agency_location' => array(
    'und' => array(
      0 => array(
        'geom' => 'POINT (-123.2631176 44.5657454)',
        'geo_type' => 'point',
        'lat' => '44.565745400000',
        'lon' => '-123.263117600000',
        'left' => '-123.263117600000',
        'top' => '44.565745400000',
        'right' => '-123.263117600000',
        'bottom' => '44.565745400000',
        'geohash' => '9rbme0fw31jf6',
      ),
    ),
  ),
  'field_agency_url' => array(
    'und' => array(
      0 => array(
        'url' => '<front>',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_agency_address' => array(
    'und' => array(
      0 => array(
        'value' => '180 NW 5th St
Corvallis, OR 97330',
        'format' => NULL,
        'safe_value' => '180 NW 5th St
Corvallis, OR 97330',
      ),
    ),
  ),
  'metatags' => array(),
  'path' => array(
    'pathauto' => 1,
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-03-27 22:22:21 +0000',
  'user_uuid' => '19f65a7f-f1c7-487b-b58f-acdb180ed7a7',
);
  $nodes[] = array(
  'title' => 'Mayor',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'agency',
  'language' => 'und',
  'created' => 1427495043,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e639db4f-b3f5-4b05-9058-b72b2a6b91ad',
  'body' => array(),
  'field_agency_category' => array(
    'und' => array(
      0 => array(
        'target_id' => 'f14bd036-3da8-44c1-ab6e-0a3e0cb68fd2',
        'uuid' => 'f14bd036-3da8-44c1-ab6e-0a3e0cb68fd2',
      ),
    ),
  ),
  'field_agency_location' => array(
    'und' => array(
      0 => array(
        'geom' => 'POINT (-123.2636401 44.5641919)',
        'geo_type' => 'point',
        'lat' => '44.564191900000',
        'lon' => '-123.263640100000',
        'left' => '-123.263640100000',
        'top' => '44.564191900000',
        'right' => '-123.263640100000',
        'bottom' => '44.564191900000',
        'geohash' => '9rbme0djjp2pr',
      ),
    ),
  ),
  'field_agency_url' => array(
    'und' => array(
      0 => array(
        'url' => '<front>',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_agency_address' => array(
    'und' => array(
      0 => array(
        'value' => '501 Southwest Madison Avenue
Corvallis, OR 97333',
        'format' => NULL,
        'safe_value' => '501 Southwest Madison Avenue
Corvallis, OR 97333',
      ),
    ),
  ),
  'metatags' => array(),
  'path' => array(
    'pathauto' => 1,
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-03-27 22:24:03 +0000',
  'user_uuid' => '19f65a7f-f1c7-487b-b58f-acdb180ed7a7',
);
  $nodes[] = array(
  'title' => 'Parks and Recreation',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'agency',
  'language' => 'und',
  'created' => 1427494896,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e91018b1-f3f1-480f-9125-b5aa9a60a3bc',
  'body' => array(),
  'field_agency_category' => array(
    'und' => array(
      0 => array(
        'target_id' => 'b305ca4d-5caa-407b-bdaf-8aa4572fe928',
        'uuid' => 'b305ca4d-5caa-407b-bdaf-8aa4572fe928',
      ),
    ),
  ),
  'field_agency_location' => array(
    'und' => array(
      0 => array(
        'geom' => 'POINT (-123.2754212 44.5528124)',
        'geo_type' => 'point',
        'lat' => '44.552812400000',
        'lon' => '-123.275421200000',
        'left' => '-123.275421200000',
        'top' => '44.552812400000',
        'right' => '-123.275421200000',
        'bottom' => '44.552812400000',
        'geohash' => '9rbm6y9dfqpw5',
      ),
    ),
  ),
  'field_agency_url' => array(
    'und' => array(
      0 => array(
        'url' => '<front>',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_agency_address' => array(
    'und' => array(
      0 => array(
        'value' => '1310 SW Avery Park Dr
Corvallis, OR',
        'format' => NULL,
        'safe_value' => '1310 SW Avery Park Dr
Corvallis, OR',
      ),
    ),
  ),
  'metatags' => array(),
  'path' => array(
    'pathauto' => 1,
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-03-27 22:21:36 +0000',
  'user_uuid' => '19f65a7f-f1c7-487b-b58f-acdb180ed7a7',
);
  return $nodes;
}