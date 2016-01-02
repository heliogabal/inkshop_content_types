<?php
/**
 * @file
 * inkshop_content_types.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function inkshop_content_types_taxonomy_default_vocabularies() {
  return array(
    'buchhaltungs_kuerzel' => array(
      'name' => 'Buchhaltungs-Kürzel',
      'machine_name' => 'buchhaltungs_kuerzel',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'category' => array(
      'name' => 'Themen',
      'machine_name' => 'category',
      'description' => 'thematic category of products',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -9,
    ),
    'kampagne' => array(
      'name' => 'Kampagne',
      'machine_name' => 'kampagne',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -8,
    ),
    'tags' => array(
      'name' => 'Schlagworte (Tags)',
      'machine_name' => 'tags',
      'description' => 'freie Schlagworte zur feineren Kategorisierung ',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -7,
    ),
    'type' => array(
      'name' => 'Format',
      'machine_name' => 'type',
      'description' => 'Format Namen der Produkte zur Klassifizierung',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -10,
    ),
  );
}
