def moyenne(notes):
    return sum(notes) / len(notes)


def mention(m):
    if m >= 16:
        return "Tres bien"
    elif m >= 14:
        return "Bien"
    elif m >= 12:
        return "Assez bien"
    elif m >= 10:
        return "Passable"
    else:
        return "Ajourne"


    # Programme principal
notes = [12.5, 9.0, 14.0, 16.5]
for i, note in enumerate(notes, start=1):
    print("Note", i, ":", note)
notes.append(11.0)

for i, note in enumerate(notes, start=1):
    print("Note", i, ":", note)

m = moyenne(notes)
print(len(notes), "notes, moyenne :", format(m, ".2f"))

print("Moyenne :", format(m, ".2f"), "(", mention(m), ")")

try:
    print(notes[10])
except IndexError as e:
    print("Erreur :", e)