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

  $linkit_profile = new stdClass();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'standard';
  $linkit_profile->admin_title = 'Standard';
  $linkit_profile->data = array(
    'plugins' => array(
      'entity:file' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'entity:node' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'entity:taxonomy_term' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'entity:user' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'page' => 0,
        'product_display' => 0,
        'donation' => 0,
        'subscription' => 0,
      ),
      'group_by_bundle' => 1,
      'reverse_menu_trail' => 0,
      'include_unpublished' => 1,
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'tags' => 0,
        'category' => 0,
        'type' => 0,
        'kampagne' => 0,
      ),
      'group_by_bundle' => 1,
      'reverse_menu_trail' => 0,
    ),
    'entity:file' => array(
      'result_description' => '',
      'bundles' => array(
        'image' => 0,
        'video' => 0,
        'audio' => 0,
        'document' => 0,
      ),
      'group_by_bundle' => 1,
      'reverse_menu_trail' => 0,
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:user' => array(
      'result_description' => '',
      'reverse_menu_trail' => 0,
    ),
    'autocomplete' => array(
      'charLimit' => 3,
      'wait' => 350,
      'remoteTimeout' => 10000,
    ),
    'attributes' => array(
      'accesskey' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'title' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'class' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'rel' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'id' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'target' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
    ),
  );
  $linkit_profile->role_rids = array(
    2 => 1,
    4 => 1,
    3 => 1,
  );
  $linkit_profile->weight = 0;
  $export['standard'] = $linkit_profile;

  return $export;
}
