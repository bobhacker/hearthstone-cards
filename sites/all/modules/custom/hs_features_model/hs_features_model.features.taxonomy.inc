<?php
/**
 * @file
 * hs_features_model.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function hs_features_model_taxonomy_default_vocabularies() {
  return array(
    'faction' => array(
      'name' => 'Faction',
      'machine_name' => 'faction',
      'description' => 'The faction of the card. Example values: Alliance, Horde, Neutral',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -10,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'mechanics' => array(
      'name' => 'Mechanics',
      'machine_name' => 'mechanics',
      'description' => 'The mechanics of the card. Example values: Windfury, Combo, Secret, Battlecry, Deathrattle, Taunt',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -9,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'playerclass' => array(
      'name' => 'Player class',
      'machine_name' => 'playerclass',
      'description' => 'The player class this card belongs to. Example values: Druid, Hunter, Mage, Paladin',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -8,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'race' => array(
      'name' => 'Race',
      'machine_name' => 'race',
      'description' => 'The race of the card. Example values: Murloc, Demon, Beast, Totem, Pirate, Dragon',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -7,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'rarity' => array(
      'name' => 'Rarity',
      'machine_name' => 'rarity',
      'description' => 'The rarity of the card. Example values: Free, Common, Rare, Epic, Legendary',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -6,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'type' => array(
      'name' => 'Type',
      'machine_name' => 'type',
      'description' => 'The card type. Example values: Minion, Spell, Weapon, Hero, Hero Power, Enchantment',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -5,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
  );
}
