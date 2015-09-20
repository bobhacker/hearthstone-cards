<?php
/**
 * @file
 * hs_features_search.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function hs_features_search_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hearthstone_facets';
  $context->description = '';
  $context->tag = 'Hearthstone';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'cards_list' => 'cards_list',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-2AcuIx0DBUH01H00Z59hDiYYz9AWXSMk' => array(
          'module' => 'facetapi',
          'delta' => '2AcuIx0DBUH01H00Z59hDiYYz9AWXSMk',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-GjZFfHQVgEb3FwWwXlt2b7467FFemUZQ' => array(
          'module' => 'facetapi',
          'delta' => 'GjZFfHQVgEb3FwWwXlt2b7467FFemUZQ',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-xIuAGBWn0q9BhZLrHWqxXQEXvyvl00UT' => array(
          'module' => 'facetapi',
          'delta' => 'xIuAGBWn0q9BhZLrHWqxXQEXvyvl00UT',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-VrLgWey0WT1sKaGxKWjMlmdgXJiL6iN9' => array(
          'module' => 'facetapi',
          'delta' => 'VrLgWey0WT1sKaGxKWjMlmdgXJiL6iN9',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-58TIlroDav0ooHb8Cs0zYLh14ETDZceG' => array(
          'module' => 'facetapi',
          'delta' => '58TIlroDav0ooHb8Cs0zYLh14ETDZceG',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'facetapi-bAL2a2B6myBM3YnjMj41ukvpn3T3GIlv' => array(
          'module' => 'facetapi',
          'delta' => 'bAL2a2B6myBM3YnjMj41ukvpn3T3GIlv',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'facetapi-Tb33D8PouosElvT5KtLQ1GPwmYkxvXZn' => array(
          'module' => 'facetapi',
          'delta' => 'Tb33D8PouosElvT5KtLQ1GPwmYkxvXZn',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'facetapi-NbwK3tdX0sUvHss0f6tGRUmv9yNF1r0z' => array(
          'module' => 'facetapi',
          'delta' => 'NbwK3tdX0sUvHss0f6tGRUmv9yNF1r0z',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Hearthstone');
  $export['hearthstone_facets'] = $context;

  return $export;
}
