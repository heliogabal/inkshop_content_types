<?php
/**
 * @file
 * inkshop_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function inkshop_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function inkshop_content_types_image_default_styles() {
  $styles = array();

  // Exported image style: product_full_image.
  $styles['product_full_image'] = array(
    'label' => 'Product Full Image',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 175,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: product_list_image.
  $styles['product_list_image'] = array(
    'label' => 'Product List Image',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 177,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function inkshop_content_types_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('Use <em>pages</em> for basic page content.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'product_display' => array(
      'name' => t('Produktansicht'),
      'base' => 'node_content',
      'description' => t('Eine Produktansicht reichert die allgemeinen Produktdaten (Titel, Gewicht, Preis) mit weiteren Informationen an, und wird benötigt, um ein Produkt mit einem Kaufen-Button sichtbar zu machen.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Ein neues Formular oder einen neuen Fragebogen für Benutzer erstellen. Eingesendete Daten und Statistiken werden gespeichert und sind berechtigten Benutzern zugänglich.'),
      'has_title' => '1',
      'title_label' => t('Anrede'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
