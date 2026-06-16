# CPP-Module-01

> 42 C++ Piscine — **Module 01**: memory allocation (`new`/`delete`), pointers vs references, pointers to member functions, and `switch`.
>
> 42 Piscine C++ — **Module 01** : allocation mémoire (`new`/`delete`), pointeurs vs références, pointeurs vers fonctions membres, et `switch`.

---

## 🇬🇧 English

### Theme

This module moves from the basics of C++ classes into how memory and indirection
actually work:

- **`new` / `delete`** — dynamic allocation on the heap and explicit deallocation,
  including the array forms `new[]` / `delete[]`. Stack allocation (automatic
  lifetime) vs heap allocation (manual lifetime).
- **References vs pointers** — when an object should be referred to by a reference
  (non-null, non-reassignable) versus a pointer (nullable, reassignable), and how
  this choice shapes class design.
- **Pointers to member functions** — building an array of `void (Harl::*)(void)`
  method pointers to dispatch behavior without a long `if`/`else` chain.
- **`switch`** — branching on a level and filtering output.

### Exercises

| Ex   | Binary               | Topic                                                                 |
| ---- | -------------------- | --------------------------------------------------------------------- |
| ex00 | `BraiiiiiiinnnzzzZ`  | **Zombie** — heap (`newZombie`, returns a `Zombie*`) vs stack (`randomChump`); `new` / `delete`. |
| ex01 | `Moarbrainz!`        | **Zombie horde** — allocate an array of `Zombie` in one `new[]`, name each, free with `delete[]`. |
| ex02 | `HiThisIsBrain`      | **Brain** — a `std::string`, a pointer to it and a reference to it; print addresses and values to show they alias the same object. |
| ex03 | `UnnecessaryViolence`| **HumanA / HumanB** — a `Weapon` shared via reference (HumanA, set at construction) vs pointer (HumanB, can be unarmed then armed later). |
| ex04 | `ft_sed`             | **ft_sed** — read a file with `ifstream`, replace every occurrence of a string, write the result out with `ofstream`. |
| ex05 | `Harl_2.0`           | **Harl** — `complain(level)` dispatches to `debug`/`info`/`warning`/`error` through an array of pointers to member functions. |
| ex06 | `harlFilter`         | **Harl filter** — same Harl driven from the command line, using a `switch` to filter and print every level from the requested one onward. |

### Build & Run

Each exercise is self-contained with its own `Makefile`. The produced binary name
matches the `NAME` in that exercise's `Makefile` (see the table above).

```bash
# from the repo root, pick an exercise
cd ex00 && make && ./BraiiiiiiinnnzzzZ
cd ex01 && make && ./Moarbrainz!
cd ex02 && make && ./HiThisIsBrain
cd ex03 && make && ./UnnecessaryViolence
cd ex05 && make && ./Harl_2.0
```

Some exercises take arguments:

```bash
# ex04 — replace a substring inside a file
cd ex04 && make && ./ft_sed <filename> <string_to_replace> <string_replacing>

# ex06 — print every complaint from the given level onward
cd ex06 && make && ./harlFilter "WARNING"
```

`make clean` / `make fclean` / `make re` are available as usual.

### What I learned

- **Stack vs heap allocation** — automatic objects die at end of scope; objects
  created with `new` live until an explicit `delete`, and returning them by
  pointer is how a factory function (`newZombie`) hands ownership to the caller.
- **`new[]` / `delete[]`** — allocating and freeing arrays as a matching pair, and
  why mismatching `delete` and `delete[]` is undefined behavior.
- **References vs pointers** — a reference must always bind to a valid object and
  can't be rebound, so it models "always has a weapon"; a pointer can be null and
  reassigned, so it models "may be unarmed, can switch weapons".
- **Pointers to member functions** — storing `void (Harl::*)(void)` in an array and
  calling through `(this->*ptr[i])()` to replace branching with a lookup.
- **C++ memory hygiene** — every `new` is paired with a `delete`, checking
  allocations, and avoiding leaks and dangling references.

---

## 🇫🇷 Français

### Thème

Ce module part des bases des classes C++ pour explorer le fonctionnement réel de la
mémoire et de l'indirection :

- **`new` / `delete`** — allocation dynamique sur le tas et libération explicite,
  y compris les formes tableau `new[]` / `delete[]`. Allocation sur la pile (durée
  de vie automatique) vs sur le tas (durée de vie manuelle).
- **Références vs pointeurs** — quand désigner un objet par une référence (non
  nulle, non réassignable) plutôt que par un pointeur (nullable, réassignable), et
  comment ce choix façonne la conception d'une classe.
- **Pointeurs vers fonctions membres** — construire un tableau de pointeurs
  `void (Harl::*)(void)` pour aiguiller le comportement sans longue chaîne
  `if`/`else`.
- **`switch`** — brancher selon un niveau et filtrer la sortie.

### Exercices

| Ex   | Binaire              | Sujet                                                                 |
| ---- | -------------------- | --------------------------------------------------------------------- |
| ex00 | `BraiiiiiiinnnzzzZ`  | **Zombie** — tas (`newZombie`, renvoie un `Zombie*`) vs pile (`randomChump`) ; `new` / `delete`. |
| ex01 | `Moarbrainz!`        | **Horde de zombies** — allouer un tableau de `Zombie` en un seul `new[]`, les nommer, libérer avec `delete[]`. |
| ex02 | `HiThisIsBrain`      | **Brain** — une `std::string`, un pointeur dessus et une référence dessus ; afficher adresses et valeurs pour montrer qu'ils désignent le même objet. |
| ex03 | `UnnecessaryViolence`| **HumanA / HumanB** — une `Weapon` partagée par référence (HumanA, fixée à la construction) vs par pointeur (HumanB, peut être désarmé puis armé plus tard). |
| ex04 | `ft_sed`             | **ft_sed** — lire un fichier avec `ifstream`, remplacer chaque occurrence d'une chaîne, écrire le résultat avec `ofstream`. |
| ex05 | `Harl_2.0`           | **Harl** — `complain(level)` aiguille vers `debug`/`info`/`warning`/`error` via un tableau de pointeurs vers fonctions membres. |
| ex06 | `harlFilter`         | **Filtre Harl** — le même Harl piloté en ligne de commande, avec un `switch` pour filtrer et afficher tous les niveaux à partir de celui demandé. |

### Compilation & Lancement

Chaque exercice est autonome avec son propre `Makefile`. Le nom du binaire produit
correspond au `NAME` du `Makefile` de l'exercice (voir le tableau ci-dessus).

```bash
# depuis la racine du dépôt, choisir un exercice
cd ex00 && make && ./BraiiiiiiinnnzzzZ
cd ex01 && make && ./Moarbrainz!
cd ex02 && make && ./HiThisIsBrain
cd ex03 && make && ./UnnecessaryViolence
cd ex05 && make && ./Harl_2.0
```

Certains exercices prennent des arguments :

```bash
# ex04 — remplacer une sous-chaîne dans un fichier
cd ex04 && make && ./ft_sed <fichier> <chaine_a_remplacer> <chaine_de_remplacement>

# ex06 — afficher toutes les plaintes à partir du niveau donné
cd ex06 && make && ./harlFilter "WARNING"
```

`make clean` / `make fclean` / `make re` sont disponibles comme d'habitude.

### Ce que ça m'a apporté

- **Pile vs tas** — les objets automatiques meurent en fin de portée ; ceux créés
  avec `new` vivent jusqu'à un `delete` explicite, et les renvoyer par pointeur est
  la façon dont une fonction fabrique (`newZombie`) transmet la propriété à
  l'appelant.
- **`new[]` / `delete[]`** — allouer et libérer des tableaux par paires
  cohérentes, et comprendre pourquoi mélanger `delete` et `delete[]` est un
  comportement indéfini.
- **Références vs pointeurs** — une référence doit toujours désigner un objet valide
  et ne peut être réassignée, donc elle modélise « a toujours une arme » ; un
  pointeur peut être nul et réassigné, donc il modélise « peut être désarmé, peut
  changer d'arme ».
- **Pointeurs vers fonctions membres** — stocker des `void (Harl::*)(void)` dans un
  tableau et appeler via `(this->*ptr[i])()` pour remplacer les branchements par
  une recherche.
- **Hygiène mémoire en C++** — chaque `new` est associé à un `delete`, on vérifie
  les allocations, et on évite fuites et références pendantes.

---

*42 — CPP Module 01.*
