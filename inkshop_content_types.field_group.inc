<?php
/**
 * @file
 * inkshop_content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function inkshop_content_types_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_produkteigenschaften|node|product_display|form';
  $field_group->group_name = 'group_produkteigenschaften';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_display';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Produkteigenschaften',
    'weight' => '8',
    'children' => array(
      0 => 'field_commerce_product',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-produkteigenschaften field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Produkteigenschaften');

  return $field_groups;
}
