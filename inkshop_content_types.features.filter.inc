<?php
/**
 * @file
 * inkshop_content_types.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function inkshop_content_types_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -10,
    'filters' => array(
      'filter_html' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <img> <p> <br> <h1> <h2> <h3> <h4> <i>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_url' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
      'media_filter' => array(
        'weight' => -42,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -41,
        'status' => 1,
        'settings' => array(),
      ),
      'emptyparagraphkiller' => array(
        'weight' => -40,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: HTML.
  $formats['html'] = array(
    'format' => 'html',
    'name' => 'HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -6,
    'filters' => array(
      'filter_html' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <i> <strong> <b> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <img> <p> <br> <h1> <h2> <h3> <h4> <table> <thead> <tbody> <th> <tr> <td> <caption>',
          'filter_html_help' => 0,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_url' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
      'media_filter' => array(
        'weight' => -42,
        'status' => 1,
        'settings' => array(),
      ),
      'icon' => array(
        'weight' => -41,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -40,
        'status' => 1,
        'settings' => array(),
      ),
      'emptyparagraphkiller' => array(
        'weight' => -39,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
