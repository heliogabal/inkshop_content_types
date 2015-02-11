<?php
/**
 * @file
 * inkshop_product_display.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function inkshop_product_display_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'inkota_produkt_import-datasheet-find_replace';
  $feeds_tamper->importer = 'inkota_produkt_import';
  $feeds_tamper->source = 'datasheet';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'http://inkota.de/uploads/tx_ttproducts/datasheet/',
    'replace' => 'sites/default/files/pdf/',
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

  return $export;
}
