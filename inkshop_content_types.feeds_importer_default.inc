<?php
/**
 * @file
 * inkshop_content_types.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function inkshop_content_types_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'inkota_product_display_import';
  $feeds_importer->config = array(
    'name' => 'INKOTA Product Display import',
    'description' => 'Imports product display from TYPO3 tt_shop',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'itemnumber',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'crdate',
            'target' => 'created',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'title',
            'target' => 'title_field',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'note',
            'target' => 'field_pd_description',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'category',
            'target' => 'field_pd_category',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          5 => array(
            'source' => 'itemnumber',
            'target' => 'field_commerce_product:sku',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'kampagne',
            'target' => 'field_pd_kampagne',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          7 => array(
            'source' => 'datasheet',
            'target' => 'field_pd_pdfs',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'crdate',
            'target' => 'created',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'html',
        'skip_hash_check' => 0,
        'bundle' => 'product_display',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['inkota_product_display_import'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'inkota_produkt_import';
  $feeds_importer->config = array(
    'name' => 'INKOTA Produkt Import',
    'description' => 'Import products from TYPO3 tt_shop',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsCommerceProductProcessor',
      'config' => array(
        'product_type' => 'product',
        'author' => '1',
        'tax_rate' => TRUE,
        'mappings' => array(
          0 => array(
            'source' => 'itemnumber',
            'target' => 'sku',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'stock',
            'target' => 'commerce_stock',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'weight',
            'target' => 'field_physical_weight:weight',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'subtitle',
            'target' => 'field_product_subtitle',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'price',
            'target' => 'commerce_price:amount',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'datasheet',
            'target' => 'field_product_pdf',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'image',
            'target' => 'field_product_image',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'product',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['inkota_produkt_import'] = $feeds_importer;

  return $export;
}
