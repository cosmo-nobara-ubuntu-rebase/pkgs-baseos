#!/usr/bin/make -f

LANGUAGES := ar ca de es eu gl be da el et fr ko pl pt pt_BR

all:
	for i in $(LANGUAGES); do \
		/usr/lib/qt5/bin/lrelease "calamares-nobara_$$i.ts"; \
		rm calamares-nobara_$$i.ts; \
	done

# vim:ts=4
