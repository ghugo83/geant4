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
//
// $Id: G4Ne24GEMProbability.hh,v 1.1 2003/08/26 18:43:03 lara Exp $
// GEANT4 tag $Name: geant4-06-00-patch-01 $
//
// Hadronic Process: Nuclear De-excitations
// by V. Lara (Nov 1999) 
//



#ifndef G4Ne24GEMProbability_h
#define G4Ne24GEMProbability_h 1


#include "G4GEMProbability.hh"


class G4Ne24GEMProbability : public G4GEMProbability
{
public:
  // Only available constructor
  G4Ne24GEMProbability();
    
  ~G4Ne24GEMProbability() {}
private:  
  // Copy constructor
  G4Ne24GEMProbability(const G4Ne24GEMProbability &right);
    
  const G4Ne24GEMProbability & operator=(const G4Ne24GEMProbability &right);
  G4bool operator==(const G4Ne24GEMProbability &right) const;
  G4bool operator!=(const G4Ne24GEMProbability &right) const;
  

private:
  
  virtual G4double CalcBetaParam(const G4Fragment & fragment) const 
  {
    return -GetCoulombBarrier(fragment);
  }
  
  
  // Excitation energy levels 
  std::vector<G4double> ExcitEnergies;
  // Spin of excitation energy levels 
  std::vector<G4double> ExcitSpins;
  
  std::vector<G4double> ExcitLifetimes;
  
};


#endif