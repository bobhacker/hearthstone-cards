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
        'cartes_hearthstone' => 'cartes_hearthstone',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-ib248t5MNCyyylI4F2GEEuy7rcQ1fKwN' => array(
          'module' => 'facetapi',
          'delta' => 'ib248t5MNCyyylI4F2GEEuy7rcQ1fKwN',
          'region' => 'sidebar_first',
          'weight' => '-12',
        ),
        'facetapi-TZO4B2L3eyZxEXG4zzB13Xyb0GQRjIdH' => array(
          'module' => 'facetapi',
          'delta' => 'TZO4B2L3eyZxEXG4zzB13Xyb0GQRjIdH',
          'region' => 'sidebar_first',
          'weight' => '-11',
        ),
        'facetapi-lKl5UZ5Nj7tuSx43l0jwNqLn1FwY9AbX' => array(
          'module' => 'facetapi',
          'delta' => 'lKl5UZ5Nj7tuSx43l0jwNqLn1FwY9AbX',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-sVVPuBtZQ0qTD4MycfIVLYQpoEVtFg65' => array(
          'module' => 'facetapi',
          'delta' => 'sVVPuBtZQ0qTD4MycfIVLYQpoEVtFg65',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-Fn2YCPBQ6Geg8oBwrsB40cryZ1U1aHvl' => array(
          'module' => 'facetapi',
          'delta' => 'Fn2YCPBQ6Geg8oBwrsB40cryZ1U1aHvl',
          'region' => 'sidebar_second',
          'weight' => '-12',
        ),
        'facetapi-25tebfjjd0bIwoW71fT680nBprzlUGqY' => array(
          'module' => 'facetapi',
          'delta' => '25tebfjjd0bIwoW71fT680nBprzlUGqY',
          'region' => 'sidebar_second',
          'weight' => '-11',
        ),
        'facetapi-XPEco8x2zSy0vHkmXlBO3dNm3tJDb7Q6' => array(
          'module' => 'facetapi',
          'delta' => 'XPEco8x2zSy0vHkmXlBO3dNm3tJDb7Q6',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'facetapi-Dj5prswonT8GKJ1LcFkVQt8640BsvxiZ' => array(
          'module' => 'facetapi',
          'delta' => 'Dj5prswonT8GKJ1LcFkVQt8640BsvxiZ',
          'region' => 'sidebar_second',
          'weight' => '-9',
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
