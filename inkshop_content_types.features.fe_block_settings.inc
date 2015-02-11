<?php
/**
 * @file
 * inkshop_content_types.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function inkshop_content_types_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-suedlink_abo_werbung'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'icon' => 'a:2:{s:4:"icon";s:0:"";s:8:"position";s:12:"title_before";}',
    'machine_name' => 'suedlink_abo_werbung',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>
node/1422',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -39,
      ),
      'inkshop' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'inkshop',
        'weight' => -39,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['webform-client-block-1422'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'client-block-1422',
    'icon' => 'a:2:{s:4:"icon";s:0:"";s:8:"position";s:12:"title_before";}',
    'module' => 'webform',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'inkshop' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'inkshop',
        'weight' => -35,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
