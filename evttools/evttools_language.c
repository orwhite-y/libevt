/*
 * Language handle functions
 *
 * Copyright (c) 2011-2012, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <common.h>
#include <types.h>

#include "evttools_language.h"
#include "evttools_libcerror.h"
#include "evttools_libcstring.h"

/* Determines the language identifier from a string
 * Returns 1 if successful, 0 if unsupported value or -1 on error
 */
int evttools_language_identifier_from_string(
     uint32_t *language_identifier,
     const libcstring_system_character_t *string,
     size_t string_length,
     libcerror_error_t **error )
{
	static char *function = "evttools_language_identifier_from_string";

	if( language_identifier == NULL )
	{
		libcerror_error_set(
		 error,
		 LIBCERROR_ERROR_DOMAIN_ARGUMENTS,
		 LIBCERROR_ARGUMENT_ERROR_INVALID_VALUE,
		 "%s: invalid language identifier.",
		 function );

		return( -1 );
	}
	if( string == NULL )
	{
		libcerror_error_set(
		 error,
		 LIBCERROR_ERROR_DOMAIN_ARGUMENTS,
		 LIBCERROR_ARGUMENT_ERROR_INVALID_VALUE,
		 "%s: invalid string.",
		 function );

		return( -1 );
	}
	if( string_length > (size_t) SSIZE_MAX )
	{
		libcerror_error_set(
		 error,
		 LIBCERROR_ERROR_DOMAIN_ARGUMENTS,
		 LIBCERROR_ARGUMENT_ERROR_VALUE_EXCEEDS_MAXIMUM,
		 "%s: invalid string length value exceeds maximum.",
		 function );

		return( -1 );
	}
	*language_identifier = LANGUAGE_HANDLE_IDENTIFIER_UNDEFINED;

	if( string_length >= 2 )
	{
		switch( string[ 0 ] )
		{
			case (libcstring_system_character_t) 'A':
			case (libcstring_system_character_t) 'a':
				switch( string[ 1 ] )
				{
					case (libcstring_system_character_t) 'R':
					case (libcstring_system_character_t) 'r':
						*language_identifier = LANGUAGE_HANDLE_IDENTIFIER_AR;
						break;

					default:
						break;
				}
				break;

			case (libcstring_system_character_t) 'B':
			case (libcstring_system_character_t) 'b':
				switch( string[ 1 ] )
				{
					case (libcstring_system_character_t) 'G':
					case (libcstring_system_character_t) 'g':
						*language_identifier = LANGUAGE_HANDLE_IDENTIFIER_BG;
						break;

					default:
						break;
				}
				break;

			case (libcstring_system_character_t) 'C':
			case (libcstring_system_character_t) 'c':
				switch( string[ 1 ] )
				{
					case (libcstring_system_character_t) 'A':
					case (libcstring_system_character_t) 'a':
						*language_identifier = LANGUAGE_HANDLE_IDENTIFIER_CA;
						break;

					case (libcstring_system_character_t) 'S':
					case (libcstring_system_character_t) 's':
						*language_identifier = LANGUAGE_HANDLE_IDENTIFIER_CS;
						break;

					default:
						break;
				}
				break;

			case (libcstring_system_character_t) 'D':
			case (libcstring_system_character_t) 'd':
				switch( string[ 1 ] )
				{
					case (libcstring_system_character_t) 'A':
					case (libcstring_system_character_t) 'a':
						*language_identifier = LANGUAGE_HANDLE_IDENTIFIER_DA;
						break;

					case (libcstring_system_character_t) 'E':
					case (libcstring_system_character_t) 'e':
						*language_identifier = LANGUAGE_HANDLE_IDENTIFIER_DE;
						break;

					default:
						break;
				}
				break;

			case (libcstring_system_character_t) 'E':
			case (libcstring_system_character_t) 'e':
				switch( string[ 1 ] )
				{
					case (libcstring_system_character_t) 'L':
					case (libcstring_system_character_t) 'l':
						*language_identifier = LANGUAGE_HANDLE_IDENTIFIER_EL;
						break;

					case (libcstring_system_character_t) 'N':
					case (libcstring_system_character_t) 'n':
						*language_identifier = LANGUAGE_HANDLE_IDENTIFIER_EN;
						break;

					case (libcstring_system_character_t) 'S':
					case (libcstring_system_character_t) 's':
						*language_identifier = LANGUAGE_HANDLE_IDENTIFIER_ES;
						break;

					default:
						break;
				}
				break;

			case (libcstring_system_character_t) 'F':
			case (libcstring_system_character_t) 'f':
				switch( string[ 1 ] )
				{
					case (libcstring_system_character_t) 'I':
					case (libcstring_system_character_t) 'i':
						*language_identifier = LANGUAGE_HANDLE_IDENTIFIER_FI;
						break;

					case (libcstring_system_character_t) 'R':
					case (libcstring_system_character_t) 'r':
						*language_identifier = LANGUAGE_HANDLE_IDENTIFIER_FR;
						break;

					default:
						break;
				}
				break;

			case (libcstring_system_character_t) 'G':
			case (libcstring_system_character_t) 'g':
/* TODO remove if not used */
				break;

			case (libcstring_system_character_t) 'H':
			case (libcstring_system_character_t) 'h':
				switch( string[ 1 ] )
				{
					case (libcstring_system_character_t) 'E':
					case (libcstring_system_character_t) 'e':
						*language_identifier = LANGUAGE_HANDLE_IDENTIFIER_HE;
						break;

					case (libcstring_system_character_t) 'R':
					case (libcstring_system_character_t) 'r':
						*language_identifier = LANGUAGE_HANDLE_IDENTIFIER_HR;
						break;

					case (libcstring_system_character_t) 'U':
					case (libcstring_system_character_t) 'u':
						*language_identifier = LANGUAGE_HANDLE_IDENTIFIER_HU;
						break;

					default:
						break;
				}
				break;

			case (libcstring_system_character_t) 'I':
			case (libcstring_system_character_t) 'i':
				switch( string[ 1 ] )
				{
					case (libcstring_system_character_t) 'S':
					case (libcstring_system_character_t) 's':
						*language_identifier = LANGUAGE_HANDLE_IDENTIFIER_IS;
						break;

					case (libcstring_system_character_t) 'T':
					case (libcstring_system_character_t) 't':
						*language_identifier = LANGUAGE_HANDLE_IDENTIFIER_IT;
						break;

					default:
						break;
				}
				break;

			case (libcstring_system_character_t) 'J':
			case (libcstring_system_character_t) 'j':
				switch( string[ 1 ] )
				{
					case (libcstring_system_character_t) 'A':
					case (libcstring_system_character_t) 'a':
						*language_identifier = LANGUAGE_HANDLE_IDENTIFIER_JA;
						break;

					default:
						break;
				}
				break;

			case (libcstring_system_character_t) 'K':
			case (libcstring_system_character_t) 'k':
				switch( string[ 1 ] )
				{
					case (libcstring_system_character_t) 'O':
					case (libcstring_system_character_t) 'o':
						*language_identifier = LANGUAGE_HANDLE_IDENTIFIER_KO;
						break;

					default:
						break;
				}
				break;

			case (libcstring_system_character_t) 'L':
			case (libcstring_system_character_t) 'l':
/* TODO remove if not used */
				break;

			case (libcstring_system_character_t) 'M':
			case (libcstring_system_character_t) 'm':
/* TODO remove if not used */
				break;

			case (libcstring_system_character_t) 'N':
			case (libcstring_system_character_t) 'n':
				switch( string[ 1 ] )
				{
					case (libcstring_system_character_t) 'L':
					case (libcstring_system_character_t) 'l':
						*language_identifier = LANGUAGE_HANDLE_IDENTIFIER_NL;
						break;

					case (libcstring_system_character_t) 'O':
					case (libcstring_system_character_t) 'o':
						*language_identifier = LANGUAGE_HANDLE_IDENTIFIER_NO;
						break;

					default:
						break;
				}
				break;

			case (libcstring_system_character_t) 'O':
			case (libcstring_system_character_t) 'o':
/* TODO remove if not used */
				break;

			case (libcstring_system_character_t) 'P':
			case (libcstring_system_character_t) 'p':
				switch( string[ 1 ] )
				{
					case (libcstring_system_character_t) 'L':
					case (libcstring_system_character_t) 'l':
						*language_identifier = LANGUAGE_HANDLE_IDENTIFIER_PL;
						break;

					case (libcstring_system_character_t) 'T':
					case (libcstring_system_character_t) 't':
						*language_identifier = LANGUAGE_HANDLE_IDENTIFIER_PT;
						break;

					default:
						break;
				}
				break;

			case (libcstring_system_character_t) 'Q':
			case (libcstring_system_character_t) 'q':
/* TODO remove if not used */
				break;

			case (libcstring_system_character_t) 'R':
			case (libcstring_system_character_t) 'r':
				switch( string[ 1 ] )
				{
					case (libcstring_system_character_t) 'M':
					case (libcstring_system_character_t) 'm':
						*language_identifier = LANGUAGE_HANDLE_IDENTIFIER_RM;
						break;

					case (libcstring_system_character_t) 'O':
					case (libcstring_system_character_t) 'o':
						*language_identifier = LANGUAGE_HANDLE_IDENTIFIER_RO;
						break;

					case (libcstring_system_character_t) 'U':
					case (libcstring_system_character_t) 'u':
						*language_identifier = LANGUAGE_HANDLE_IDENTIFIER_RU;
						break;

					default:
						break;
				}
				break;

			case (libcstring_system_character_t) 'S':
			case (libcstring_system_character_t) 's':
				break;

			case (libcstring_system_character_t) 'T':
			case (libcstring_system_character_t) 't':
				break;

			case (libcstring_system_character_t) 'U':
			case (libcstring_system_character_t) 'u':
				break;

			case (libcstring_system_character_t) 'V':
			case (libcstring_system_character_t) 'v':
				break;

			case (libcstring_system_character_t) 'W':
			case (libcstring_system_character_t) 'w':
				break;

			case (libcstring_system_character_t) 'X':
			case (libcstring_system_character_t) 'x':
				break;

			case (libcstring_system_character_t) 'Y':
			case (libcstring_system_character_t) 'y':
				break;

			case (libcstring_system_character_t) 'Z':
			case (libcstring_system_character_t) 'z':
				break;

			default:
				break;
		}
	}
	if( *language_identifier != LANGUAGE_HANDLE_IDENTIFIER_UNDEFINED )
	{
		return( 1 );
	}
	return( 0 );
}

#ifdef TODO
	{ 0x0004, "zh-Hans",		"Chinese, Han (Simplified variant)" },

	{ 0x001b, "sk",			"Slovak" },
	{ 0x001c, "sq",			"Albanian" },
	{ 0x001d, "sv",			"Swedish" },
	{ 0x001e, "th",			"Thai" },
	{ 0x001f, "tr",			"Turkish" },
	{ 0x0020, "ur",			"Urdu" },
	{ 0x0021, "id",			"Indonesian" },
	{ 0x0022, "uk",			"Ukrainian" },
	{ 0x0023, "be",			"Belarusian" },
	{ 0x0024, "sl",			"Slovenian" },
	{ 0x0025, "et",			"Estonian" },
	{ 0x0026, "lv",			"Latvian" },
	{ 0x0027, "lt",			"Lithuanian" },
	{ 0x0028, "tg",			"Tajik" },
	{ 0x0029, "fa",			"Persian" },
	{ 0x002a, "vi",			"Vietnamese" },
	{ 0x002b, "hy",			"Armenian" },
	{ 0x002c, "az",			"Azerbaijani" },
	{ 0x002d, "eu",			"Basque" },
	{ 0x002e, "hsb",		"Upper Sorbian" },
	{ 0x002f, "mk",			"Macedonian" },
	{ 0x0032, "tn",			"Tswana" },
	{ 0x0034, "xh",			"Xhosa" },
	{ 0x0035, "zu",			"Zulu" },
	{ 0x0036, "af",			"Afrikaans" },
	{ 0x0037, "ka",			"Georgian" },
	{ 0x0038, "fo",			"Faroese" },
	{ 0x0039, "hi",			"Hindi" },
	{ 0x003a, "mt",			"Maltese" },
	{ 0x003b, "se",			"Northern Sami" },
	{ 0x003c, "ga",			"Irish" },
	{ 0x003e, "ms",			"Malay (macrolanguage)" },
	{ 0x003f, "kk",			"Kazakh" },
	{ 0x0040, "ky",			"Kirghiz" },
	{ 0x0041, "sw",			"Swahili (macrolanguage)" },
	{ 0x0042, "tk",			"Turkmen" },
	{ 0x0043, "uz",			"Uzbek" },
	{ 0x0044, "tt",			"Tatar" },
	{ 0x0045, "bn",			"Bengali" },
	{ 0x0046, "pa",			"Panjabi" },
	{ 0x0047, "gu",			"Gujarati" },
	{ 0x0048, "or",			"Oriya" },
	{ 0x0049, "ta",			"Tamil" },
	{ 0x004a, "te",			"Telugu" },
	{ 0x004b, "kn",			"Kannada" },
	{ 0x004c, "ml",			"Malayalam" },
	{ 0x004d, "as",			"Assamese" },
	{ 0x004e, "mr",			"Marathi" },
	{ 0x004f, "sa",			"Sanskrit" },
	{ 0x0050, "mn",			"Mongolian" },
	{ 0x0051, "bo",			"Tibetan" },
	{ 0x0052, "cy",			"Welsh" },
	{ 0x0053, "km",			"Central Khmer" },
	{ 0x0054, "lo",			"Lao" },
	{ 0x0056, "gl",			"Galician" },
	{ 0x0057, "kok",		"Konkani (macrolanguage)" },
	{ 0x005a, "syr",		"Syriac" },
	{ 0x005b, "si",			"Sinhala" },
	{ 0x005d, "iu",			"Inuktitut" },
	{ 0x005e, "am",			"Amharic" },
	{ 0x005f, "tzm",		"Central Atlas Tamazight" },
	{ 0x0061, "ne",			"Nepali" },
	{ 0x0062, "fy",			"Western Frisian" },
	{ 0x0063, "ps",			"Pushto" },
	{ 0x0064, "fil",		"Filipino" },
	{ 0x0065, "dv",			"Dhivehi" },
	{ 0x0068, "ha",			"Hausa" },
	{ 0x006a, "yo",			"Yoruba" },
	{ 0x006b, "quz",		"Cusco Quechua" },
	{ 0x006c, "nso",		"Pedi" },
	{ 0x006d, "ba",			"Bashkir" },
	{ 0x006e, "lb",			"Luxembourgish" },
	{ 0x006f, "kl",			"Kalaallisut" },
	{ 0x0070, "ig",			"Igbo" },
	{ 0x0078, "ii",			"Sichuan Yi" },
	{ 0x007a, "arn",		"Mapudungun" },
	{ 0x007c, "moh",		"Mohawk" },
	{ 0x007e, "br",			"Breton" },
	{ 0x0080, "ug",			"Uighur" },
	{ 0x0081, "mi",			"Maori" },
	{ 0x0082, "oc",			"Occitan (post 1500)" },
	{ 0x0083, "co",			"Corsican" },
	{ 0x0084, "gsw",		"Swiss German" },
	{ 0x0085, "sah",		"Yakut" },
	{ 0x0086, "qut",		"" },
	{ 0x0087, "rw",			"Kinyarwanda" },
	{ 0x0088, "wo",			"Wolof" },
	{ 0x008c, "prs",		"Dari" },
	{ 0x0091, "gd",			"Scottish Gaelic" },

	{ 0x0401, "ar-SA",		"Arabic, Saudi Arabia" },
	{ 0x0402, "bg-BG",		"Bulgarian, Bulgaria" },
	{ 0x0403, "ca-ES",		"Catalan, Spain" },
	{ 0x0404, "zh-TW",		"Chinese, Taiwan, Province of China" },
	{ 0x0405, "cs-CZ",		"Czech, Czech Republic" },
	{ 0x0406, "da-DK",		"Danish, Denmark" },
	{ 0x0407, "de-DE",		"German, Germany" },
	{ 0x0408, "el-GR",		"Modern Greek (1453-), Greece" },
	{ 0x0409, "en-US",		"English, United States" },
	{ 0x040a, "es-ES_tradnl",	"Spanish" },
	{ 0x040b, "fi-FI",		"Finnish, Finland" },
	{ 0x040c, "fr-FR",		"French, France" },
	{ 0x040d, "he-IL",		"Hebrew, Israel" },
	{ 0x040e, "hu-HU",		"Hungarian, Hungary" },
	{ 0x040f, "is-IS",		"Icelandic, Iceland" },
	{ 0x0410, "it-IT",		"Italian, Italy" },
	{ 0x0411, "ja-JP",		"Japanese, Japan" },
	{ 0x0412, "ko-KR",		"Korean, Republic of Korea" },
	{ 0x0413, "nl-NL",		"Dutch, Netherlands" },
	{ 0x0414, "nb-NO",		"Norwegian Bokmål, Norway" },
	{ 0x0415, "pl-PL",		"Polish, Poland" },
	{ 0x0416, "pt-BR",		"Portuguese, Brazil" },
	{ 0x0417, "rm-CH",		"Romansh, Switzerland" },
	{ 0x0418, "ro-RO",		"Romanian, Romania" },
	{ 0x0419, "ru-RU",		"Russian, Russian Federation" },
	{ 0x041a, "hr-HR",		"Croatian, Croatia" },
	{ 0x041b, "sk-SK",		"Slovak, Slovakia" },
	{ 0x041c, "sq-AL",		"Albanian, Albania" },
	{ 0x041d, "sv-SE",		"Swedish, Sweden" },
	{ 0x041e, "th-TH",		"Thai, Thailand" },
	{ 0x041f, "tr-TR",		"Turkish, Turkey" },
	{ 0x0420, "ur-PK",		"Urdu, Pakistan" },
	{ 0x0421, "id-ID",		"Indonesian, Indonesia" },
	{ 0x0422, "uk-UA",		"Ukrainian, Ukraine" },
	{ 0x0423, "be-BY",		"Belarusian, Belarus" },
	{ 0x0424, "sl-SI",		"Slovenian, Slovenia" },
	{ 0x0425, "et-EE",		"Estonian, Estonia" },
	{ 0x0426, "lv-LV",		"Latvian, Latvia" },
	{ 0x0427, "lt-LT",		"Lithuanian, Lithuania" },
	{ 0x0428, "tg-Cyrl-TJ",		"Tajik, Cyrillic, Tajikistan" },
	{ 0x0429, "fa-IR",		"Persian, Islamic Republic of Iran" },
	{ 0x042a, "vi-VN",		"Vietnamese, Viet Nam" },
	{ 0x042b, "hy-AM",		"Armenian, Armenia" },
	{ 0x042c, "az-Latn-AZ",		"Azerbaijani, Latin, Azerbaijan" },
	{ 0x042d, "eu-ES",		"Basque, Spain" },
	{ 0x042e, "wen-DE",		"Sorbian languages, Germany" },
	{ 0x042f, "mk-MK",		"Macedonian, The Former Yugoslav Republic of Macedonia" },
	{ 0x0430, "st-ZA",		"Southern Sotho, South Africa" },
	{ 0x0431, "ts-ZA",		"Tsonga, South Africa" },
	{ 0x0432, "tn-ZA",		"Tswana, South Africa" },
	{ 0x0433, "ven-ZA",		"South Africa" },
	{ 0x0434, "xh-ZA",		"Xhosa, South Africa" },
	{ 0x0435, "zu-ZA",		"Zulu, South Africa" },
	{ 0x0436, "af-ZA",		"Afrikaans, South Africa" },
	{ 0x0437, "ka-GE",		"Georgian, Georgia" },
	{ 0x0438, "fo-FO",		"Faroese, Faroe Islands" },
	{ 0x0439, "hi-IN",		"Hindi, India" },
	{ 0x043a, "mt-MT",		"Maltese, Malta" },
	{ 0x043b, "se-NO",		"Northern Sami, Norway" },
	{ 0x043e, "ms-MY",		"Malay (macrolanguage), Malaysia" },
	{ 0x043f, "kk-KZ",		"Kazakh, Kazakhstan" },
	{ 0x0440, "ky-KG",		"Kirghiz, Kyrgyzstan" },
	{ 0x0441, "sw-KE",		"Swahili (macrolanguage), Kenya" },
	{ 0x0442, "tk-TM",		"Turkmen, Turkmenistan" },
	{ 0x0443, "uz-Latn-UZ",		"Uzbek, Latin, Uzbekistan" },
	{ 0x0444, "tt-RU",		"Tatar, Russian Federation" },
	{ 0x0445, "bn-IN",		"Bengali, India" },
	{ 0x0446, "pa-IN",		"Panjabi, India" },
	{ 0x0447, "gu-IN",		"Gujarati, India" },
	{ 0x0448, "or-IN",		"Oriya, India" },
	{ 0x0449, "ta-IN",		"Tamil, India" },
	{ 0x044a, "te-IN",		"Telugu, India" },
	{ 0x044b, "kn-IN",		"Kannada, India" },
	{ 0x044c, "ml-IN",		"Malayalam, India" },
	{ 0x044d, "as-IN",		"Assamese, India" },
	{ 0x044e, "mr-IN",		"Marathi, India" },
	{ 0x044f, "sa-IN",		"Sanskrit, India" },
	{ 0x0450, "mn-MN",		"Mongolian, Mongolia" },
	{ 0x0451, "bo-CN",		"Tibetan, China" },
	{ 0x0452, "cy-GB",		"Welsh, United Kingdom" },
	{ 0x0453, "km-KH",		"Central Khmer, Cambodia" },
	{ 0x0454, "lo-LA",		"Lao, Lao People's Democratic Republic" },
	{ 0x0455, "my-MM",		"Burmese, Myanmar" },
	{ 0x0456, "gl-ES",		"Galician, Spain" },
	{ 0x0457, "kok-IN",		"Konkani (macrolanguage), India" },
	{ 0x0458, "mni",		"Manipuri" },
	{ 0x0459, "sd-IN",		"Sindhi, India" },
	{ 0x045a, "syr-SY",		"Syriac, Syrian Arab Republic" },
	{ 0x045b, "si-LK",		"Sinhala, Sri Lanka" },
	{ 0x045c, "chr-US",		"Cherokee, United States" },
	{ 0x045d, "iu-Cans-CA",		"Inuktitut, Unified Canadian Aboriginal Syllabics, Canada" },
	{ 0x045e, "am-ET",		"Amharic, Ethiopia" },
	{ 0x045f, "tmz",		"Tamanaku" },
	{ 0x0461, "ne-NP",		"Nepali, Nepal" },
	{ 0x0462, "fy-NL",		"Western Frisian, Netherlands" },
	{ 0x0463, "ps-AF",		"Pushto, Afghanistan" },
	{ 0x0464, "fil-PH",		"Filipino, Philippines" },
	{ 0x0465, "dv-MV",		"Dhivehi, Maldives" },
	{ 0x0466, "bin-NG",		"Bini, Nigeria" },
	{ 0x0467, "fuv-NG",		"Nigerian Fulfulde, Nigeria" },
	{ 0x0468, "ha-Latn-NG",		"Hausa, Latin, Nigeria" },
	{ 0x0469, "ibb-NG",		"Ibibio, Nigeria" },
	{ 0x046a, "yo-NG",		"Yoruba, Nigeria" },
	{ 0x046b, "quz-BO",		"Cusco Quechua, Bolivia" },
	{ 0x046c, "nso-ZA",		"Pedi, South Africa" },
	{ 0x046d, "ba-RU",		"Bashkir, Russian Federation" },
	{ 0x046e, "lb-LU",		"Luxembourgish, Luxembourg" },
	{ 0x046f, "kl-GL",		"Kalaallisut, Greenland" },
	{ 0x0470, "ig-NG",		"Igbo, Nigeria" },
	{ 0x0471, "kr-NG",		"Kanuri, Nigeria" },
	{ 0x0472, "gaz-ET",		"West Central Oromo, Ethiopia" },
	{ 0x0473, "ti-ER",		"Tigrinya, Eritrea" },
	{ 0x0474, "gn-PY",		"Guarani, Paraguay" },
	{ 0x0475, "haw-US",		"Hawaiian, United States" },
	{ 0x0477, "so-SO",		"Somali, Somalia" },
	{ 0x0478, "ii-CN",		"Sichuan Yi, China" },
	{ 0x0479, "pap-AN",		"Papiamento, Netherlands Antilles" },
	{ 0x047a, "arn-CL",		"Mapudungun, Chile" },
	{ 0x047c, "moh-CA",		"Mohawk, Canada" },
	{ 0x047e, "br-FR",		"Breton, France" },
	{ 0x0480, "ug-CN",		"Uighur, China" },
	{ 0x0481, "mi-NZ",		"Maori, New Zealand" },
	{ 0x0482, "oc-FR",		"Occitan (post 1500), France" },
	{ 0x0483, "co-FR",		"Corsican, France" },
	{ 0x0484, "gsw-FR",		"Swiss German, France" },
	{ 0x0485, "sah-RU",		"Yakut, Russian Federation" },
	{ 0x0486, "qut-GT",		"Guatemala" },
	{ 0x0487, "rw-RW",		"Kinyarwanda, Rwanda" },
	{ 0x0488, "wo-SN",		"Wolof, Senegal" },
	{ 0x048c, "prs-AF",		"Dari, Afghanistan" },
	{ 0x048d, "plt-MG",		"Plateau Malagasy, Madagascar" },
	{ 0x0491, "gd-GB",		"Scottish Gaelic, United Kingdom" },

	{ 0x0801, "ar-IQ",		"Arabic, Iraq" },
	{ 0x0804, "zh-CN",		"Chinese, China" },
	{ 0x0807, "de-CH",		"German, Switzerland" },
	{ 0x0809, "en-GB",		"English, United Kingdom" },
	{ 0x080a, "es-MX",		"Spanish, Mexico" },
	{ 0x080c, "fr-BE",		"French, Belgium" },
	{ 0x0810, "it-CH",		"Italian, Switzerland" },
	{ 0x0813, "nl-BE",		"Dutch, Belgium" },
	{ 0x0814, "nn-NO",		"Norwegian Nynorsk, Norway" },
	{ 0x0816, "pt-PT",		"Portuguese, Portugal" },
	{ 0x0818, "ro-MO",		"Romanian, Macao" },
	{ 0x0819, "ru-MO",		"Russian, Macao" },
	{ 0x081a, "sr-Latn-CS",		"Serbian, Latin, Serbia and Montenegro" },
	{ 0x081d, "sv-FI",		"Swedish, Finland" },
	{ 0x0820, "ur-IN",		"Urdu, India" },
	{ 0x082c, "az-Cyrl-AZ",		"Azerbaijani, Cyrillic, Azerbaijan" },
	{ 0x082e, "dsb-DE",		"Lower Sorbian, Germany" },
	{ 0x083b, "se-SE",		"Northern Sami, Sweden" },
	{ 0x083c, "ga-IE",		"Irish, Ireland" },
	{ 0x083e, "ms-BN",		"Malay (macrolanguage), Brunei Darussalam" },
	{ 0x0843, "uz-Cyrl-UZ",		"Uzbek, Cyrillic, Uzbekistan" },
	{ 0x0845, "bn-BD",		"Bengali, Bangladesh" },
	{ 0x0846, "pa-PK",		"Panjabi, Pakistan" },
	{ 0x0850, "mn-Mong-CN",		"Mongolian, Mongolian, China" },
	{ 0x0851, "bo-BT",		"Tibetan, Bhutan" },
	{ 0x0859, "sd-PK",		"Sindhi, Pakistan" },
	{ 0x085d, "iu-Latn-CA",		"Inuktitut, Latin, Canada" },
	{ 0x085f, "tzm-Latn-DZ",	"Central Atlas Tamazight, Latin, Algeria" },
	{ 0x0861, "ne-IN",		"Nepali, India" },
	{ 0x086b, "quz-EC",		"Cusco Quechua, Ecuador" },
	{ 0x0873, "ti-ET",		"Tigrinya, Ethiopia" },

	{ 0x0c01, "ar-EG",		"Arabic, Egypt" },
	{ 0x0c04, "zh-HK",		"Chinese, Hong Kong" },
	{ 0x0c07, "de-AT",		"German, Austria" },
	{ 0x0c09, "en-AU",		"English, Australia" },
	{ 0x0c0a, "es-ES",		"Spanish, Spain" },
	{ 0x0c0c, "fr-CA",		"French, Canada" },
	{ 0x0c1a, "sr-Cyrl-CS",		"Serbian, Cyrillic, Serbia and Montenegro" },
	{ 0x0c3b, "se-FI",		"Northern Sami, Finland" },
	{ 0x0c5f, "tmz-MA",		"Tamanaku, Morocco" },
	{ 0x0c6b, "quz-PE",		"Cusco Quechua, Peru" },

	{ 0x1001, "ar-LY",		"Arabic, Libyan Arab Jamahiriya" },
	{ 0x1004, "zh-SG",		"Chinese, Singapore" },
	{ 0x1007, "de-LU",		"German, Luxembourg" },
	{ 0x1009, "en-CA",		"English, Canada" },
	{ 0x100a, "es-GT",		"Spanish, Guatemala" },
	{ 0x100c, "fr-CH",		"French, Switzerland" },
	{ 0x101a, "hr-BA",		"Croatian, Bosnia and Herzegovina" },
	{ 0x103b, "smj-NO",		"Lule Sami, Norway" },
	{ 0x1401, "ar-DZ",		"Arabic, Algeria" },
	{ 0x1404, "zh-MO",		"Chinese, Macao" },
	{ 0x1407, "de-LI",		"German, Liechtenstein" },
	{ 0x1409, "en-NZ",		"English, New Zealand" },
	{ 0x140a, "es-CR",		"Spanish, Costa Rica" },
	{ 0x140c, "fr-LU",		"French, Luxembourg" },
	{ 0x141a, "bs-Latn-BA",		"Bosnian, Latin, Bosnia and Herzegovina" },
	{ 0x143b, "smj-SE",		"Lule Sami, Sweden" },
	{ 0x1801, "ar-MA",		"Arabic, Morocco" },
	{ 0x1809, "en-IE",		"English, Ireland" },
	{ 0x180a, "es-PA",		"Spanish, Panama" },
	{ 0x180c, "fr-MC",		"French, Monaco" },
	{ 0x181a, "sr-Latn-BA",		"Serbian, Latin, Bosnia and Herzegovina" },
	{ 0x183b, "sma-NO",		"Southern Sami, Norway" },
	{ 0x1c01, "ar-TN",		"Arabic, Tunisia" },
	{ 0x1c09, "en-ZA",		"English, South Africa" },
	{ 0x1c0a, "es-DO",		"Spanish, Dominican Republic" },
	{ 0x1c0c, "fr-West",		"French" },
	{ 0x1c1a, "sr-Cyrl-BA",		"Serbian, Cyrillic, Bosnia and Herzegovina" },
	{ 0x1c3b, "sma-SE",		"Southern Sami, Sweden" },

	{ 0x2001, "ar-OM",		"Arabic, Oman" },
	{ 0x2009, "en-JM",		"English, Jamaica" },
	{ 0x200a, "es-VE",		"Spanish, Venezuela" },
	{ 0x200c, "fr-RE",		"French, Réunion" },
	{ 0x201a, "bs-Cyrl-BA",		"Bosnian, Cyrillic, Bosnia and Herzegovina" },
	{ 0x203b, "sms-FI",		"Skolt Sami, Finland" },
	{ 0x2401, "ar-YE",		"Arabic, Yemen" },
	{ 0x2409, "en-CB",		"English" },
	{ 0x240a, "es-CO",		"Spanish, Colombia" },
	{ 0x240c, "fr-CG",		"French, Congo" },
	{ 0x241a, "sr-Latn-RS",		"Serbian, Latin, Serbia" },
	{ 0x243b, "smn-FI",		"Inari Sami, Finland" },
	{ 0x2801, "ar-SY",		"Arabic, Syrian Arab Republic" },
	{ 0x2809, "en-BZ",		"English, Belize" },
	{ 0x280a, "es-PE",		"Spanish, Peru" },
	{ 0x280c, "fr-SN",		"French, Senegal" },
	{ 0x281a, "sr-Cyrl-RS",		"Serbian, Cyrillic, Serbia" },
	{ 0x2c01, "ar-JO",		"Arabic, Jordan" },
	{ 0x2c09, "en-TT",		"English, Trinidad and Tobago" },
	{ 0x2c0a, "es-AR",		"Spanish, Argentina" },
	{ 0x2c0c, "fr-CM",		"French, Cameroon" },
	{ 0x2c1a, "sr-Latn-ME",		"Serbian, Latin, Montenegro" },

	{ 0x3001, "ar-LB",		"Arabic, Lebanon" },
	{ 0x3009, "en-ZW",		"English, Zimbabwe" },
	{ 0x300a, "es-EC",		"Spanish, Ecuador" },
	{ 0x300c, "fr-CI",		"French, Côte d'Ivoire" },
	{ 0x301a, "sr-Cyrl-ME",		"Serbian, Cyrillic, Montenegro" },
	{ 0x3401, "ar-KW",		"Arabic, Kuwait" },
	{ 0x3409, "en-PH",		"English, Philippines" },
	{ 0x340a, "es-CL",		"Spanish, Chile" },
	{ 0x340c, "fr-ML",		"French, Mali" },
	{ 0x3801, "ar-AE",		"Arabic, United Arab Emirates" },
	{ 0x3809, "en-ID",		"English, Indonesia" },
	{ 0x380a, "es-UY",		"Spanish, Uruguay" },
	{ 0x380c, "fr-MA",		"French, Morocco" },
	{ 0x3c01, "ar-BH",		"Arabic, Bahrain" },
	{ 0x3c09, "en-HK",		"English, Hong Kong" },
	{ 0x3c0a, "es-PY",		"Spanish, Paraguay" },
	{ 0x3c0c, "fr-HT",		"French, Haiti" },

	{ 0x4001, "ar-QA",		"Arabic, Qatar" },
	{ 0x4009, "en-IN",		"English, India" },
	{ 0x400a, "es-BO",		"Spanish, Bolivia" },
	{ 0x4409, "en-MY",		"English, Malaysia" },
	{ 0x440a, "es-SV",		"Spanish, El Salvador" },
	{ 0x4809, "en-SG",		"English, Singapore" },
	{ 0x480a, "es-HN",		"Spanish, Honduras" },
	{ 0x4c0a, "es-NI",		"Spanish, Nicaragua" },

	{ 0x500a, "es-PR",		"Spanish, Puerto Rico" },
	{ 0x540a, "es-US",		"Spanish, United States" },

	{ 0x641a, "bs-Cyrl",		"Bosnian, Cyrillic" },
	{ 0x681a, "bs-Latn",		"Bosnian, Latin" },
	{ 0x6c1a, "sr-Cyrl",		"Serbian, Cyrillic" },

	{ 0x701a, "sr-Latn",		"Serbian, Latin" },
	{ 0x703b, "smn",		"Inari Sami" },
	{ 0x742c, "az-Cyrl",		"Azerbaijani, Cyrillic" },
	{ 0x743b, "sms",		"Skolt Sami" },
	{ 0x7804, "zh",			"Chinese" },
	{ 0x7814, "nn",			"Norwegian Nynorsk" },
	{ 0x781a, "bs",			"Bosnian" },
	{ 0x782c, "az-Latn",		"Azerbaijani, Latin" },
	{ 0x783b, "sma",		"Southern Sami" },
	{ 0x7843, "uz-Cyrl",		"Uzbek, Cyrillic" },
	{ 0x7850, "mn-Cyrl",		"Mongolian, Cyrillic" },
	{ 0x785d, "iu-Cans",		"Inuktitut, Unified Canadian Aboriginal Syllabics" },
	{ 0x7c04, "zh-Hant",		"Chinese, Han (Traditional variant)" },
	{ 0x7c14, "nb",			"Norwegian Bokmål" },
	{ 0x7c1a, "sr",			"Serbian" },
	{ 0x7c28, "tg-Cyrl",		"Tajik, Cyrillic" },
	{ 0x7c2e, "dsb",		"Lower Sorbian" },
	{ 0x7c3b, "smj",		"Lule Sami" },
	{ 0x7c43, "uz-Latn",		"Uzbek, Latin" },
	{ 0x7c50, "mn-Mong",		"Mongolian, Mongolian" },
	{ 0x7c5d, "iu-Latn",		"Inuktitut, Latin" },
	{ 0x7c5f, "tzm-Latn",		"Central Atlas Tamazight, Latin" },
	{ 0x7c68, "ha-Latn",		"Hausa, Latin" },
#endif /* TODO */

/* Returns a string representation of the language identifier
 * Returns 1 if successful or NULL if language identifier is not supported
 */
const libcstring_system_character_t *evttools_language_identifier_to_string(
                                      uint32_t language_identifier )
{
	switch( language_identifier )
	{
		case LANGUAGE_HANDLE_IDENTIFIER_AR:
			return( _LIBCSTRING_SYSTEM_STRING( "ar" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_BG:
			return( _LIBCSTRING_SYSTEM_STRING( "bg" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_CA:
			return( _LIBCSTRING_SYSTEM_STRING( "ca" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_ZH_HANS:
			return( _LIBCSTRING_SYSTEM_STRING( "zh-Hans" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_CS:
			return( _LIBCSTRING_SYSTEM_STRING( "cs" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_DA:
			return( _LIBCSTRING_SYSTEM_STRING( "da" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_DE:
			return( _LIBCSTRING_SYSTEM_STRING( "de" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_EL:
			return( _LIBCSTRING_SYSTEM_STRING( "el" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_EN:
			return( _LIBCSTRING_SYSTEM_STRING( "en" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_ES:
			return( _LIBCSTRING_SYSTEM_STRING( "es" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_FI:
			return( _LIBCSTRING_SYSTEM_STRING( "fi" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_FR:
			return( _LIBCSTRING_SYSTEM_STRING( "fr" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_HE:
			return( _LIBCSTRING_SYSTEM_STRING( "he" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_HU:
			return( _LIBCSTRING_SYSTEM_STRING( "hu" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_IS:
			return( _LIBCSTRING_SYSTEM_STRING( "is" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_IT:
			return( _LIBCSTRING_SYSTEM_STRING( "it" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_JA:
			return( _LIBCSTRING_SYSTEM_STRING( "ja" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_KO:
			return( _LIBCSTRING_SYSTEM_STRING( "ko" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_NL:
			return( _LIBCSTRING_SYSTEM_STRING( "nl" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_NO:
			return( _LIBCSTRING_SYSTEM_STRING( "no" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_PL:
			return( _LIBCSTRING_SYSTEM_STRING( "pl" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_PT:
			return( _LIBCSTRING_SYSTEM_STRING( "pt" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_RM:
			return( _LIBCSTRING_SYSTEM_STRING( "rm" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_RO:
			return( _LIBCSTRING_SYSTEM_STRING( "ro" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_RU:
			return( _LIBCSTRING_SYSTEM_STRING( "ru" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_HR:
			return( _LIBCSTRING_SYSTEM_STRING( "hr" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_SK:
			return( _LIBCSTRING_SYSTEM_STRING( "sk" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_SQ:
			return( _LIBCSTRING_SYSTEM_STRING( "sq" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_SV:
			return( _LIBCSTRING_SYSTEM_STRING( "sv" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_TH:
			return( _LIBCSTRING_SYSTEM_STRING( "th" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_TR:
			return( _LIBCSTRING_SYSTEM_STRING( "tr" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_UR:
			return( _LIBCSTRING_SYSTEM_STRING( "ur" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_ID:
			return( _LIBCSTRING_SYSTEM_STRING( "id" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_UK:
			return( _LIBCSTRING_SYSTEM_STRING( "uk" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_BE:
			return( _LIBCSTRING_SYSTEM_STRING( "be" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_SL:
			return( _LIBCSTRING_SYSTEM_STRING( "sl" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_ET:
			return( _LIBCSTRING_SYSTEM_STRING( "et" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_LV:
			return( _LIBCSTRING_SYSTEM_STRING( "lv" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_LT:
			return( _LIBCSTRING_SYSTEM_STRING( "lt" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_TG:
			return( _LIBCSTRING_SYSTEM_STRING( "tg" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_FA:
			return( _LIBCSTRING_SYSTEM_STRING( "fa" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_VI:
			return( _LIBCSTRING_SYSTEM_STRING( "vi" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_HY:
			return( _LIBCSTRING_SYSTEM_STRING( "hy" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_AZ:
			return( _LIBCSTRING_SYSTEM_STRING( "az" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_EU:
			return( _LIBCSTRING_SYSTEM_STRING( "eu" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_HSB:
			return( _LIBCSTRING_SYSTEM_STRING( "hsb" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_MK:
			return( _LIBCSTRING_SYSTEM_STRING( "mk" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_TN:
			return( _LIBCSTRING_SYSTEM_STRING( "tn" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_XH:
			return( _LIBCSTRING_SYSTEM_STRING( "xh" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_ZU:
			return( _LIBCSTRING_SYSTEM_STRING( "zu" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_AF:
			return( _LIBCSTRING_SYSTEM_STRING( "af" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_KA:
			return( _LIBCSTRING_SYSTEM_STRING( "ka" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_FO:
			return( _LIBCSTRING_SYSTEM_STRING( "fo" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_HI:
			return( _LIBCSTRING_SYSTEM_STRING( "hi" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_MT:
			return( _LIBCSTRING_SYSTEM_STRING( "mt" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_SE:
			return( _LIBCSTRING_SYSTEM_STRING( "se" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_GA:
			return( _LIBCSTRING_SYSTEM_STRING( "ga" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_MS:
			return( _LIBCSTRING_SYSTEM_STRING( "ms" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_KK:
			return( _LIBCSTRING_SYSTEM_STRING( "kk" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_KY:
			return( _LIBCSTRING_SYSTEM_STRING( "ky" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_SW:
			return( _LIBCSTRING_SYSTEM_STRING( "sw" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_TK:
			return( _LIBCSTRING_SYSTEM_STRING( "tk" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_UZ:
			return( _LIBCSTRING_SYSTEM_STRING( "uz" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_TT:
			return( _LIBCSTRING_SYSTEM_STRING( "tt" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_BN:
			return( _LIBCSTRING_SYSTEM_STRING( "bn" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_PA:
			return( _LIBCSTRING_SYSTEM_STRING( "pa" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_GU:
			return( _LIBCSTRING_SYSTEM_STRING( "gu" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_OR:
			return( _LIBCSTRING_SYSTEM_STRING( "or" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_TA:
			return( _LIBCSTRING_SYSTEM_STRING( "ta" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_TE:
			return( _LIBCSTRING_SYSTEM_STRING( "te" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_KN:
			return( _LIBCSTRING_SYSTEM_STRING( "kn" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_ML:
			return( _LIBCSTRING_SYSTEM_STRING( "ml" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_AS:
			return( _LIBCSTRING_SYSTEM_STRING( "as" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_MR:
			return( _LIBCSTRING_SYSTEM_STRING( "mr" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_SA:
			return( _LIBCSTRING_SYSTEM_STRING( "sa" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_MN:
			return( _LIBCSTRING_SYSTEM_STRING( "mn" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_BO:
			return( _LIBCSTRING_SYSTEM_STRING( "bo" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_CY:
			return( _LIBCSTRING_SYSTEM_STRING( "cy" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_KM:
			return( _LIBCSTRING_SYSTEM_STRING( "km" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_LO:
			return( _LIBCSTRING_SYSTEM_STRING( "lo" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_GL:
			return( _LIBCSTRING_SYSTEM_STRING( "gl" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_KOK:
			return( _LIBCSTRING_SYSTEM_STRING( "kok" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_SYR:
			return( _LIBCSTRING_SYSTEM_STRING( "syr" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_SI:
			return( _LIBCSTRING_SYSTEM_STRING( "si" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_IU:
			return( _LIBCSTRING_SYSTEM_STRING( "iu" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_AM:
			return( _LIBCSTRING_SYSTEM_STRING( "am" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_TZM:
			return( _LIBCSTRING_SYSTEM_STRING( "tzm" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_NE:
			return( _LIBCSTRING_SYSTEM_STRING( "ne" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_FY:
			return( _LIBCSTRING_SYSTEM_STRING( "fy" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_PS:
			return( _LIBCSTRING_SYSTEM_STRING( "ps" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_FIL:
			return( _LIBCSTRING_SYSTEM_STRING( "fil" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_DV:
			return( _LIBCSTRING_SYSTEM_STRING( "dv" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_HA:
			return( _LIBCSTRING_SYSTEM_STRING( "ha" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_YO:
			return( _LIBCSTRING_SYSTEM_STRING( "yo" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_QUZ:
			return( _LIBCSTRING_SYSTEM_STRING( "quz" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_NSO:
			return( _LIBCSTRING_SYSTEM_STRING( "nso" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_BA:
			return( _LIBCSTRING_SYSTEM_STRING( "ba" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_LB:
			return( _LIBCSTRING_SYSTEM_STRING( "lb" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_KL:
			return( _LIBCSTRING_SYSTEM_STRING( "kl" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_IG:
			return( _LIBCSTRING_SYSTEM_STRING( "ig" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_II:
			return( _LIBCSTRING_SYSTEM_STRING( "ii" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_ARN:
			return( _LIBCSTRING_SYSTEM_STRING( "arn" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_MOH:
			return( _LIBCSTRING_SYSTEM_STRING( "moh" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_BR:
			return( _LIBCSTRING_SYSTEM_STRING( "br" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_UG:
			return( _LIBCSTRING_SYSTEM_STRING( "ug" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_MI:
			return( _LIBCSTRING_SYSTEM_STRING( "mi" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_OC:
			return( _LIBCSTRING_SYSTEM_STRING( "oc" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_CO:
			return( _LIBCSTRING_SYSTEM_STRING( "co" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_GSW:
			return( _LIBCSTRING_SYSTEM_STRING( "gsw" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_SAH:
			return( _LIBCSTRING_SYSTEM_STRING( "sah" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_QUT:
			return( _LIBCSTRING_SYSTEM_STRING( "qut" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_RW:
			return( _LIBCSTRING_SYSTEM_STRING( "rw" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_WO:
			return( _LIBCSTRING_SYSTEM_STRING( "wo" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_PRS:
			return( _LIBCSTRING_SYSTEM_STRING( "prs" ) );

		case LANGUAGE_HANDLE_IDENTIFIER_GD:
			return( _LIBCSTRING_SYSTEM_STRING( "gd" ) );

/* TODO */
		default:
			break;
	}
	return( NULL );
}

