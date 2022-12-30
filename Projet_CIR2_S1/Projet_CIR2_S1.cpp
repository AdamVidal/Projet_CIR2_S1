#include <wx/wx.h>
#include <iostream>
#include <string>

std::string idclient = "1";
std::string motdepasseclient = "MDP";
std::string nomclient = "Van";
std::string prenomclient = "Lucas";
std::string adresseclient = "41 Boulevard Vauban";
std::string villeclient = "Lille";
std::string codepostalclient = "59000";

class MainFrame : public wxFrame
{
public:
	MainFrame(const wxString& title);
private:
	void Valider(wxCommandEvent& evt);

	wxTextCtrl* numAgence;
};


MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {

	wxPanel* panel = new wxPanel(this);

	wxStaticText* texte = new wxStaticText(panel, wxID_ANY, "Choisir une agence", wxPoint(350, 50));

	wxStaticText* texteNumeroAgence = new wxStaticText(panel, wxID_ANY, "Entrer le numéro de l'agence : ", wxPoint(50, 200));

	numAgence = new wxTextCtrl(panel, wxID_ANY, "", wxPoint(220, 200), wxSize(200, -1));

	wxButton* bouttonValiderAgence = new wxButton(panel, wxID_ANY, "Valider", wxPoint(350, 465), wxSize(100, 35));

	bouttonValiderAgence->Bind(wxEVT_BUTTON, &MainFrame::Valider, this);
}


void CreateMainFrame() {
	MainFrame* mainFrame = new MainFrame("Banque");

	mainFrame->SetClientSize(800, 600);
	mainFrame->Center();
	mainFrame->Show();
}



class ConnexionInscription : public wxFrame
{
public:
	ConnexionInscription(const wxString& title);
private:
	void SeConnecter(wxCommandEvent& evt);
	void SInscrire(wxCommandEvent& evt);
	void Retour(wxCommandEvent& evt);
};

ConnexionInscription::ConnexionInscription(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {

	wxPanel* panel = new wxPanel(this);

	wxStaticText* texte = new wxStaticText(panel, wxID_ANY, "Espace client", wxPoint(365, 50));

	wxButton* seConnecter = new wxButton(panel, wxID_ANY, "Se connecter", wxPoint(350, 200), wxSize(100, 35));

	seConnecter->Bind(wxEVT_BUTTON, &ConnexionInscription::SeConnecter, this);

	wxButton* sInscrire = new wxButton(panel, wxID_ANY, "S'inscrire", wxPoint(350, 250), wxSize(100, 35));

	sInscrire->Bind(wxEVT_BUTTON, &ConnexionInscription::SInscrire, this);

	wxButton* retour = new wxButton(panel, wxID_ANY, "Retour", wxPoint(350, 465), wxSize(100, 35));

	retour->Bind(wxEVT_BUTTON, &ConnexionInscription::Retour, this);
}

void CreateConnectionInscription() {
	ConnexionInscription* connexionInscription = new ConnexionInscription("Banque");

	connexionInscription->SetClientSize(800, 600);
	connexionInscription->Center();
	connexionInscription->Show();
}

class Connexion : public wxFrame
{
public:
	Connexion(const wxString& title);
private:
	void Valider(wxCommandEvent& evt);
	void Retour(wxCommandEvent& evt);

	wxTextCtrl* IDClient;
	wxTextCtrl* MotDePasse;
};


Connexion::Connexion(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {

	wxPanel* panel = new wxPanel(this);

	wxStaticText* texte = new wxStaticText(panel, wxID_ANY, "Connexion", wxPoint(375, 50));

	wxStaticText* labelIDClient = new wxStaticText(panel, wxID_ANY, "ID Client : ", wxPoint(50, 200));

	IDClient = new wxTextCtrl(panel, wxID_ANY, "", wxPoint(220, 200), wxSize(200, -1));

	wxStaticText* labelMotDePasse = new wxStaticText(panel, wxID_ANY, "Mot de passe : ", wxPoint(50, 250));

	MotDePasse = new wxTextCtrl(panel, wxID_ANY, "", wxPoint(220, 250), wxSize(200, -1), wxTE_PASSWORD);

	wxButton* Valider = new wxButton(panel, wxID_ANY, "Valider", wxPoint(350, 300), wxSize(100, 35));

	Valider->Bind(wxEVT_BUTTON, &Connexion::Valider, this);

	wxButton* Retour = new wxButton(panel, wxID_ANY, "Retour", wxPoint(350, 465), wxSize(100, 35));

	Retour->Bind(wxEVT_BUTTON, &Connexion::Retour, this);
}


void CreateConnexion() {
	Connexion* mainFrame = new Connexion("Banque");

	mainFrame->SetClientSize(800, 600);
	mainFrame->Center();
	mainFrame->Show();
}


class Inscription : public wxFrame
{
public:
	Inscription(const wxString& title);
private:
	void Valider(wxCommandEvent& evt);
	void Retour(wxCommandEvent& evt);

	wxTextCtrl* Nom;
	wxTextCtrl* Prenom;
	wxTextCtrl* Adresse;
	wxTextCtrl* Ville;
	wxTextCtrl* CodePostal;
	wxTextCtrl* MotDePasse;
	wxTextCtrl* ConfirmerMotDePasse;
};


Inscription::Inscription(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {

	wxPanel* panel = new wxPanel(this);

	wxStaticText* texte = new wxStaticText(panel, wxID_ANY, "Inscription", wxPoint(375, 50));


	wxStaticText* labelNom = new wxStaticText(panel, wxID_ANY, "Nom : ", wxPoint(50, 200));

	Nom = new wxTextCtrl(panel, wxID_ANY, "", wxPoint(220, 200), wxSize(200, -1));


	wxStaticText* labelPrénom = new wxStaticText(panel, wxID_ANY, "Prénom : ", wxPoint(50, 230));

	Prenom = new wxTextCtrl(panel, wxID_ANY, "", wxPoint(220, 230), wxSize(200, -1));


	wxStaticText* labelAdresse = new wxStaticText(panel, wxID_ANY, "Adresse : ", wxPoint(50, 260));

	Adresse = new wxTextCtrl(panel, wxID_ANY, "", wxPoint(220, 260), wxSize(200, -1));


	wxStaticText* labelVille = new wxStaticText(panel, wxID_ANY, "Ville : ", wxPoint(50, 290));

	Ville = new wxTextCtrl(panel, wxID_ANY, "", wxPoint(220, 290), wxSize(200, -1));


	wxStaticText* labelCodePostal = new wxStaticText(panel, wxID_ANY, "Code postal : ", wxPoint(50, 320));

	CodePostal = new wxTextCtrl(panel, wxID_ANY, "", wxPoint(220, 320), wxSize(200, -1));


	wxStaticText* labelMotDePasse = new wxStaticText(panel, wxID_ANY, "Mot de passe : ", wxPoint(50, 350));

	MotDePasse = new wxTextCtrl(panel, wxID_ANY, "", wxPoint(220, 350), wxSize(200, -1), wxTE_PASSWORD);


	wxStaticText* labelConfirmerMotDePasse = new wxStaticText(panel, wxID_ANY, "Confirmer le mot de passe : ", wxPoint(50, 380));

	ConfirmerMotDePasse = new wxTextCtrl(panel, wxID_ANY, "", wxPoint(220, 380), wxSize(200, -1), wxTE_PASSWORD);


	wxButton* Valider = new wxButton(panel, wxID_ANY, "Valider", wxPoint(350, 415), wxSize(100, 35));

	Valider->Bind(wxEVT_BUTTON, &Inscription::Valider, this);


	wxButton* Retour = new wxButton(panel, wxID_ANY, "Retour", wxPoint(350, 490), wxSize(100, 35));

	Retour->Bind(wxEVT_BUTTON, &Inscription::Retour, this);
}


void CreateInscription() {
	Inscription* mainFrame = new Inscription("Banque");

	mainFrame->SetClientSize(800, 600);
	mainFrame->Center();
	mainFrame->Show();
}



class EspaceClient : public wxFrame
{
public:
	EspaceClient(const wxString& title);
private:
	void VosInformations(wxCommandEvent& evt);
	void VosComptes(wxCommandEvent& evt);
	void Deconnexion(wxCommandEvent& evt);
};


EspaceClient::EspaceClient(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {

	wxPanel* panel = new wxPanel(this);

	wxStaticText* texte = new wxStaticText(panel, wxID_ANY, "Espace client", wxPoint(365, 50));

	wxButton* seConnecter = new wxButton(panel, wxID_ANY, "Vos informations", wxPoint(350, 200), wxSize(100, 35));

	seConnecter->Bind(wxEVT_BUTTON, &EspaceClient::VosInformations, this);

	wxButton* sInscrire = new wxButton(panel, wxID_ANY, "Vos comptes", wxPoint(350, 250), wxSize(100, 35));

	sInscrire->Bind(wxEVT_BUTTON, &EspaceClient::VosComptes, this);

	wxButton* deconnexion = new wxButton(panel, wxID_ANY, "Déconnexion", wxPoint(350, 465), wxSize(100, 35));

	deconnexion->Bind(wxEVT_BUTTON, &EspaceClient::Deconnexion, this);
}


void CreateEspaceClient() {
	EspaceClient* mainFrame = new EspaceClient("Banque");

	mainFrame->SetClientSize(800, 600);
	mainFrame->Center();
	mainFrame->Show();
}



class Informations : public wxFrame
{
public:
	Informations(const wxString& title);
private:
	void Valider(wxCommandEvent& evt);
	void Retour(wxCommandEvent& evt);

	wxTextCtrl* Nom;
	wxTextCtrl* Prenom;
	wxTextCtrl* Adresse;
	wxTextCtrl* Ville;
	wxTextCtrl* CodePostal;
	wxTextCtrl* MotDePasse;
	wxTextCtrl* ConfirmerMotDePasse;
};


Informations::Informations(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {

	wxPanel* panel = new wxPanel(this);

	wxStaticText* texte = new wxStaticText(panel, wxID_ANY, "Espace client", wxPoint(375, 50));

	std::string strnom = "Nom : ";
	strnom += nomclient;
	wxStaticText* labelNom = new wxStaticText(panel, wxID_ANY, strnom, wxPoint(50, 200));

	std::string strprenom = "Prénom : ";
	strprenom += prenomclient;
	wxStaticText* labelPrénom = new wxStaticText(panel, wxID_ANY, strprenom, wxPoint(50, 230));

	std::string stradresse = "Adresse : ";
	stradresse += adresseclient;
	wxStaticText* labelAdresse = new wxStaticText(panel, wxID_ANY, stradresse, wxPoint(50, 260));

	std::string strville = "Ville : ";
	strville += villeclient;
	wxStaticText* labelVille = new wxStaticText(panel, wxID_ANY, strville, wxPoint(50, 290));

	std::string strcodepostal = "Code postal : ";
	strcodepostal += codepostalclient;
	wxStaticText* labelCodePostal = new wxStaticText(panel, wxID_ANY, strcodepostal, wxPoint(50, 320));


	wxButton* Retour = new wxButton(panel, wxID_ANY, "Retour", wxPoint(350, 490), wxSize(100, 35));

	Retour->Bind(wxEVT_BUTTON, &Informations::Retour, this);
}


void CreateInformations() {
	Informations* mainFrame = new Informations("Banque");

	mainFrame->SetClientSize(800, 600);
	mainFrame->Center();
	mainFrame->Show();
}





void MainFrame::Valider(wxCommandEvent& evt) {
	int slen = strlen(numAgence->GetValue());
	if (slen > 0) {
		this->Close();
		CreateConnectionInscription();
	}
}



void ConnexionInscription::SeConnecter(wxCommandEvent& evt) {
	this->Close();
	CreateConnexion();
}

void ConnexionInscription::SInscrire(wxCommandEvent& evt) {
	this->Close();
	CreateInscription();
}

void ConnexionInscription::Retour(wxCommandEvent& evt) {
	this->Close();
	CreateMainFrame();
}



void Connexion::Valider(wxCommandEvent& evt) {
	int slen = strlen(IDClient->GetValue());
	if (slen > 0 && static_cast<std::string>(IDClient->GetValue()) == idclient) {
		slen = strlen(MotDePasse->GetValue());
		if (slen > 0 && static_cast<std::string>(MotDePasse->GetValue()) == motdepasseclient) {
			this->Close();
			CreateEspaceClient();
		}
	}
}

void Connexion::Retour(wxCommandEvent& evt) {
	this->Close();
	CreateConnectionInscription();
}



void Inscription::Valider(wxCommandEvent& evt) {
	int slen = strlen(Nom->GetValue());
	if (slen > 0) {
		slen = strlen(Prenom->GetValue());
		if (slen > 0) {
			int slen = strlen(Adresse->GetValue());
			if (slen > 0) {
				slen = strlen(Ville->GetValue());
				if (slen > 0) {
					int slen = strlen(CodePostal->GetValue());
					if (slen > 0) {
						int slen = strlen(MotDePasse->GetValue());
						if (slen > 0 && MotDePasse->GetValue() == ConfirmerMotDePasse->GetValue()) {
							motdepasseclient = static_cast<std::string>(MotDePasse->GetValue());
							nomclient = static_cast<std::string>(Nom->GetValue());
							prenomclient = static_cast<std::string>(Prenom->GetValue());
							adresseclient = static_cast<std::string>(Adresse->GetValue());
							villeclient = static_cast<std::string>(Ville->GetValue());
							codepostalclient = static_cast<std::string>(CodePostal->GetValue());
							this->Close();
							CreateEspaceClient();
						}
					}
				}
			}
		}
	}
}

void Inscription::Retour(wxCommandEvent& evt) {
	this->Close();
	CreateConnectionInscription();
}



void EspaceClient::VosInformations(wxCommandEvent& evt) {
	this->Close();
	CreateInformations();
}

void EspaceClient::VosComptes(wxCommandEvent& evt) {
	/*this->Close();
	CreateMainFrame();*/
}

void EspaceClient::Deconnexion(wxCommandEvent& evt) {
	this->Close();
	CreateConnexion();
}



void Informations::Valider(wxCommandEvent& evt) {
	this->Close();
	CreateConnectionInscription();
}

void Informations::Retour(wxCommandEvent& evt) {
	this->Close();
	CreateEspaceClient();
}




class App : public wxApp
{
public:
	bool OnInit();
};



wxIMPLEMENT_APP(App);

bool App::OnInit() {
	CreateMainFrame();

	return true;
}