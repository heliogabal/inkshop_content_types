<?php
/**
 * @file
 * inkshop_content_types.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function inkshop_content_types_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'inkota_product_display_import-category-explode';
  $feeds_tamper->importer = 'inkota_product_display_import';
  $feeds_tamper->source = 'category';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['inkota_product_display_import-category-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'inkota_product_display_import-datasheet-inkota_produkt_import_datasheet';
  $feeds_tamper->importer = 'inkota_product_display_import';
  $feeds_tamper->source = 'datasheet';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'http://inkota.de/uploads/tx_ttproducts/datasheet/',
    'replace' => 'sites/inkshop.stage.o4507778742.v26.ams.host8.biz/files/pdf/',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'URL entfernen und Pfad hinzufuegen';
  $export['inkota_product_display_import-datasheet-inkota_produkt_import_datasheet'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'inkota_product_display_import-datasheet-rewrite';
  $feeds_tamper->importer = 'inkota_product_display_import';
  $feeds_tamper->source = 'datasheet';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'https://www.inkota.de/uploads/tx_ttproducts/datasheet/[datasheet]',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Rewrite';
  $export['inkota_product_display_import-datasheet-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'inkota_produkt_import-datasheet-find_replace';
  $feeds_tamper->importer = 'inkota_produkt_import';
  $feeds_tamper->source = 'datasheet';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'http://inkota.de/uploads/tx_ttproducts/datasheet/',
    'replace' => 'sites/inkshop.aegir.local/files/pdf/',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'replace absolute URL for PDFs with local URL';
  $export['inkota_produkt_import-datasheet-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'inkota_produkt_import-datasheet-rewrite';
  $feeds_tamper->importer = 'inkota_produkt_import';
  $feeds_tamper->source = 'datasheet';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'https://www.inkota.de/uploads/tx_ttproducts/datasheet/[datasheet]',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'INKOTA Url voranstellen';
  $export['inkota_produkt_import-datasheet-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'inkota_produkt_import-image-rewrite';
  $feeds_tamper->importer = 'inkota_produkt_import';
  $feeds_tamper->source = 'image';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'https://www.inkota.de/uploads/pics/[image]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'INKOTA URL voranstellen';
  $export['inkota_produkt_import-image-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'inkota_produkt_import-price-math';
  $feeds_tamper->importer = 'inkota_produkt_import';
  $feeds_tamper->source = 'price';
  $feeds_tamper->plugin_id = 'math';
  $feeds_tamper->settings = array(
    'operation' => 'multiplication',
    'value' => '10',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Preis mal 10';
  $export['inkota_produkt_import-price-math'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'inkota_produkt_import-price-price_find_replace';
  $feeds_tamper->importer = 'inkota_produkt_import';
  $feeds_tamper->source = 'price';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '.',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Punkt von Preis entfernen';
  $export['inkota_produkt_import-price-price_find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'inkota_produkt_import-weight-find_replace';
  $feeds_tamper->importer = 'inkota_produkt_import';
  $feeds_tamper->source = 'weight';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '0,0',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Remove 0,0';
  $export['inkota_produkt_import-weight-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'inkota_produkt_import-weight-math';
  $feeds_tamper->importer = 'inkota_produkt_import';
  $feeds_tamper->source = 'weight';
  $feeds_tamper->plugin_id = 'math';
  $feeds_tamper->settings = array(
    'operation' => 'multiplication',
    'value' => '1000',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Mathematical operation';
  $export['inkota_produkt_import-weight-math'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'inkota_produkt_import-weight-remove_0';
  $feeds_tamper->importer = 'inkota_produkt_import';
  $feeds_tamper->source = 'weight';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '0,',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Remove 0';
  $export['inkota_produkt_import-weight-remove_0'] = $feeds_tamper;

  return $export;
}
