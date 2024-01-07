import speech_recognition as sr

def ouvir_microfone():
    recognizer = sr.Recognizer()
    with sr.Microphone() as source:
        print("Diga algo...")
        recognizer.adjust_for_ambient_noise(source)
        audio = recognizer.listen(source, timeout=3)
    try:
        print("Você disse: " + recognizer.recognize_google(audio, language='pt-BR'))
    except sr.UnknownValueError:
        print("Não foi possível entender a fala.")
    except sr.RequestError as e:
        print("Erro na requisição ao serviço de reconhecimento de fala; {0}".format(e))


if __name__ == "__main__":
    ouvir_microfone()
