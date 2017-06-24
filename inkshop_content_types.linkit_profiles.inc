<?php
/**
 * @file
 * inkshop_content_types.linkit_profiles.inc
 */

/**
 * Implements hook_default_linkit_profiles().
 */
function inkshop_content_types_default_linkit_profiles() {
  $export = array();

  $linkit_profile = new LinkitProfile();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'standard';
  $linkit_profile->admin_title = 'Standard';
  $linkit_profile->admin_description = '';
  $linkit_profile->profile_type = '1';
  $linkit_profile->data = array(
    'text_formats' => array(
      'filtered_html' => 'filtered_html',
      'full_html' => 'full_html',
      'html' => 'html',
      'commerce_order_message' => 0,
      'plain_text' => 0,
      'php_code' => 0,
      'mailchimp_campaign' => 0,
      'html_e_mail_text_format' => 0,
      'ds_code' => 0,
    ),
    'button_text' => 'Suche',
    'search_plugins' => array(
      'entity:menu_link' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:file' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:user' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:search_api_server' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:search_api_index' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:pet' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:commerce_product' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:commerce_payment_transaction' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:taxonomy_term' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:node' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'product_display' => 'product_display',
        'page' => 'page',
        'donation' => 0,
        'webform' => 0,
      ),
      'group_by_bundle' => 0,
      'include_unpublished' => 0,
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'tags' => 0,
        'category' => 0,
        'type' => 0,
        'kampagne' => 0,
        'newsletter' => 0,
        'abo_geschenk' => 0,
        'spendenzweck' => 0,
        'buchhaltungs_kuerzel' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:commerce_payment_transaction' => array(
      'result_description' => '',
      'bundles' => array(
        'bank_transfer' => 0,
        'paypal_ec' => 0,
        'paypal_wps' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:commerce_product' => array(
      'result_description' => '',
      'bundles' => array(
        'product' => 'product',
        'donation' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:pet' => array(
      'result_description' => '',
    ),
    'entity:search_api_server' => array(
      'result_description' => '',
    ),
    'entity:search_api_index' => array(
      'result_description' => '',
    ),
    'entity:file' => array(
      'result_description' => '',
      'bundles' => array(
        'image' => 0,
        'video' => 0,
        'audio' => 0,
        'document' => 0,
      ),
      'group_by_bundle' => 0,
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'url_type' => 'entity',
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:user' => array(
      'result_description' => '',
    ),
    'entity:menu_link' => array(
      'result_description' => '',
      'bundles' => array(
        'menu-admin-menu' => 0,
        'menu-benutzer-menu' => 0,
        'menu-buchhaltungsmenu' => 0,
        'main-menu' => 0,
        'management' => 0,
        'navigation' => 0,
        'menu-pflichtmenu' => 0,
        'menu-simone-menu' => 0,
        'user-menu' => 0,
        'menu-versand-menu' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'insert_plugin' => array(
      'url_method' => '1',
    ),
    'attribute_plugins' => array(
      'accesskey' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'title' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'class' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'id' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'target' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'rel' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
    ),
    'autocomplete' => array(
      'charLimit' => '3',
      'wait' => '350',
      'remoteTimeout' => '10000',
    ),
  );
  $linkit_profile->weight = 0;
  $export['standard'] = $linkit_profile;

  return $export;
}
