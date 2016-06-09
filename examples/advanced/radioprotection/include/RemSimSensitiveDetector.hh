//
// ********************************************************************
// * DISCLAIMER                                                       *
// *                                                                  *
// * The following disclaimer summarizes all the specific disclaimers *
// * of contributors to this software. The specific disclaimers,which *
// * govern, are listed with their locations in:                      *
// *   http://cern.ch/geant4/license                                  *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.                                                             *
// *                                                                  *
// * This  code  implementation is the  intellectual property  of the *
// * GEANT4 collaboration.                                            *
// * By copying,  distributing  or modifying the Program (or any work *
// * based  on  the Program)  you indicate  your  acceptance of  this *
// * statement, and all its terms.                                    *
// ********************************************************************
//
// $Id: RemSimSensitiveDetector.hh,v 1.2 2004/05/22 12:57:05 guatelli Exp $
// GEANT4 tag $Name: geant4-06-02 $
//
// Code developed by: S.Guatelli, guatelli@ge.infn.it
//
#ifndef RemSimSensitiveDetector_h
#define RemSimSensitiveDetector_h 1

#include "G4VSensitiveDetector.hh"
#include "RemSimHit.hh"
class G4Step;
class G4HCofThisEvent;
class G4TouchableHistory;

class RemSimSensitiveDetector : public G4VSensitiveDetector
{

  public:
      RemSimSensitiveDetector (G4String name);
      ~RemSimSensitiveDetector();

      void Initialize(G4HCofThisEvent*HCE);
      G4bool ProcessHits(G4Step*aStep,G4TouchableHistory*);
      void EndOfEvent(G4HCofThisEvent*HCE);

  private:
      RemSimHitsCollection *trackerCollection;
};
#endif
