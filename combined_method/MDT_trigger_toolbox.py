"""package with often used functions."""
import ROOT
import math
# definition of functions
def plot_efficiency(h_cut, h_all):
    """produce efficiency curve."""
    g = ROOT.TGraphAsymmErrors(h_cut, h_all)
    return g

def calc_efficiency(h_cut, h_all):
    """calculate efficiency."""
    x_min = h_cut.GetXaxis().FindBin(20.)
    x_max = h_cut.GetXaxis().FindBin(100.)
    nominator = h_cut.Integral(x_min, x_max)
    denominator = h_all.Integral(x_min, x_max)
    if denominator == 0.:
        return -1
    return float(nominator) / float(denominator)

def energy_loss(eta):
    """return mean energy loss"""
    if eta < 0.03254:
        return [3.03183, 0.0921971]
    elif eta < 0.09754:
        return [2.83742, 0.0571599]
    elif eta < 0.16254:
        return [2.84752, 0.0564173]
    elif eta < 0.22754:
        return [3.20808, 0.0899532]
    elif eta < 0.29254:
        return [2.97616, 0.0667244]
    elif eta < 0.35754:
        return [2.83297, 0.0544369]
    elif eta < 0.42254:
        return [2.87826, 0.0661667]
    elif eta < 0.48753:
        return [2.84105, 0.0603182]
    elif eta < 0.55253:
        return [2.90034, 0.0758939]
    elif eta < 0.61753:
        return [2.84928, 0.0759393]
    elif eta < 0.68253:
        return [2.66775, 0.0542108]
    elif eta < 0.74753:
        return [2.41445, 0.0774419]
    elif eta < 0.81253:
        return [2.34255, 0.0604266]
    elif eta < 0.87753:
        return [2.14618, 0.0576942]
    elif eta < 0.94253:
        return [2.17184, 0.0502855]
    elif eta < 1.00753:
        return [2.34017, 0.0677421]
    elif eta < 1.07253:
        return [2.63773, 0.0899142]
    elif eta < 1.13753:
        return [2.68561, 0.0614804]
    elif eta < 1.20253:
        return [3.06272, 0.138338]
    elif eta < 1.26752:
        return [2.63666, 0.118063]
    elif eta < 1.33252:
        return [2.26223, 0.106308]
    elif eta < 1.39752:
        return [1.90493, 0.114058]
    elif eta < 1.46252:
        return [1.35624, 0.0755301]
    elif eta < 1.52752:
        return [1.60843, 0.124303]
    elif eta < 1.59252:
        return [1.24673, 0.146531]
    elif eta < 1.65752:
        return [1.07589, 0.126264]
    elif eta < 1.72252:
        return [1.17017, 0.0870815]
    elif eta < 1.78752:
        return [1.23152, 0.074339]
    elif eta < 1.85251:
        return [1.07889, 0.066386]
    elif eta < 1.91751:
        return [1.07469, 0.0915081]
    elif eta < 1.98251:
        return [0.824006, 0.0922468]
    elif eta < 2.04751:
        return [0.903138, 0.0597543]
    elif eta < 2.11251:
        return [0.895417, 0.053517]
    elif eta < 2.17751:
        return [0.843082, 0.0699367]
    elif eta < 2.24251:
        return [0.653334, 0.0544988]
    elif eta < 2.30751:
        return [0.625382, 0.0357466]
    else:
        return [0.788138, 0.0929607]


def GetPhiRegionId(phi):
    """horii phi regions."""
    phi_divided = (2*math.pi)/80
    phi_region_id_f = (phi+math.pi)/phi_divided
    phi_region_id = int(phi_region_id_f)
    phi_region_id %= 10

    return phi_region_id

def GetRegionId(eta, phi):
    """horii regions."""
    region_id = -100
    abseta = abs(eta)
    phi_region = GetPhiRegionId(phi)

    if abseta < 0.80:
        if phi_region == 0 or phi_region == 9:
            region_id = 0
        elif phi_region == 1 or phi_region == 8:
            region_id = 1
        elif phi_region == 2 or phi_region == 7:
            region_id = 2
        elif phi_region == 3 or phi_region == 6:
            region_id = 3
        elif phi_region == 4 or phi_region == 5:
            region_id = 4
    elif abseta >= 0.80 and abseta < 1.05:
        if phi_region == 0 or phi_region == 9:
            region_id = 5
        elif phi_region == 1 or phi_region == 8:
            region_id = 6
        elif phi_region == 2 or phi_region == 7:
            region_id = 7
        elif phi_region == 3 or phi_region == 6:
            region_id = 8
        elif phi_region == 4 or phi_region == 5:
            region_id = 9
    elif abseta >= 1.05 and abseta < 1.25:
        if phi_region == 0 or phi_region == 9:
            region_id = 10
        elif phi_region == 1 or phi_region == 8:
            region_id = 11
        elif phi_region == 2 or phi_region == 7:
            region_id = 12
        elif phi_region == 3 or phi_region == 6:
            region_id = 13
        elif phi_region == 4 or phi_region == 5:
            region_id = 14
    elif abseta >= 1.25 and abseta < 1.40:
        if phi_region == 0 or phi_region == 9:
            region_id = 15
        elif phi_region == 1 or phi_region == 8:
            region_id = 16
        elif phi_region == 2 or phi_region == 7:
            region_id = 17
        elif phi_region == 3 or phi_region == 6:
            region_id = 18
        elif phi_region == 4 or phi_region == 5:
            region_id = 19
    elif abseta >= 1.40 and abseta < 1.50:
        if phi_region == 0 or phi_region == 9:
            region_id = 20
        elif phi_region == 1 or phi_region == 8:
            region_id = 21
        elif phi_region == 2 or phi_region == 7:
            region_id = 22
        elif phi_region == 3 or phi_region == 6:
            region_id = 23
        elif phi_region == 4 or phi_region == 5:
            region_id = 24
    elif abseta >= 1.50 and abseta < 1.60:
        if phi_region == 0 or phi_region == 9:
            region_id = 25
        elif phi_region == 1 or phi_region == 8:
            region_id = 26
        elif phi_region == 2 or phi_region == 7:
            region_id = 27
        elif phi_region == 3 or phi_region == 6:
            region_id = 28
        elif phi_region == 4 or phi_region == 5:
            region_id = 29
    elif abseta >= 1.60 and abseta < 1.70:
        if phi_region == 0 or phi_region == 9:
            region_id = 30
        elif phi_region == 1 or phi_region == 8:
            region_id = 31
        elif phi_region == 2 or phi_region == 7:
            region_id = 32
        elif phi_region == 3 or phi_region == 6:
            region_id = 33
        elif phi_region == 4 or phi_region == 5:
            region_id = 34
    elif abseta >= 1.70 and abseta < 1.80:
        if phi_region == 0 or phi_region == 9:
            region_id = 35
        elif phi_region == 1 or phi_region == 8:
            region_id = 36
        elif phi_region == 2 or phi_region == 7:
            region_id = 37
        elif phi_region == 3 or phi_region == 6:
            region_id = 38
        elif phi_region == 4 or phi_region == 5:
            region_id = 39
    elif abseta >= 1.80 and abseta < 1.90:
        if phi_region == 0 or phi_region == 9:
            region_id = 40
        elif phi_region == 1 or phi_region == 8:
            region_id = 41
        elif phi_region == 2 or phi_region == 7:
            region_id = 42
        elif phi_region == 3 or phi_region == 6:
            region_id = 43
        elif phi_region == 4 or phi_region == 5:
            region_id = 44
    elif abseta >= 1.90 and abseta < 2.10:
        if phi_region == 0 or phi_region == 9:
            region_id = 45
        elif phi_region == 1 or phi_region == 8:
            region_id = 46
        elif phi_region == 2 or phi_region == 7:
            region_id = 47
        elif phi_region == 3 or phi_region == 6:
            region_id = 48
        elif phi_region == 4 or phi_region == 5:
            region_id = 49
    elif abseta >= 2.10 and abseta < 2.20:
        if phi_region == 0 or phi_region == 9:
            region_id = 50
        elif phi_region == 1 or phi_region == 8:
            region_id = 51
        elif phi_region == 2 or phi_region == 7:
            region_id = 52
        elif phi_region == 3 or phi_region == 6:
            region_id = 53
        elif phi_region == 4 or phi_region == 5:
            region_id = 54
    elif abseta >= 2.20:
        if phi_region == 0 or phi_region == 9:
            region_id = 55
        elif phi_region == 1 or phi_region == 8:
            region_id = 56
        elif phi_region == 2 or phi_region == 7:
            region_id = 57
        elif phi_region == 3 or phi_region == 6:
            region_id = 58
        elif phi_region == 4 or phi_region == 5:
            region_id = 59
    return region_id


def beta_selection(beta, eta, phi):
    """horii beta thresholds."""
    region_id = GetRegionId(eta, phi)
    absbeta = abs(beta)

    if region_id == 0 and absbeta < 0.018:
        return 1
    elif region_id == 1 and absbeta < 1.000:
        return 1
    elif region_id == 2 and absbeta < 0.020:
        return 1
    elif region_id == 3 and absbeta < 0.016:
        return 1
    elif region_id == 4 and absbeta < 0.020:
        return 1
    elif region_id == 5 and absbeta < 0.016:
        return 1
    elif region_id == 6 and absbeta < 1.000:
        return 1
    elif region_id == 7 and absbeta < 0.020:
        return 1
    elif region_id == 8 and absbeta < 0.016:
        return 1
    elif region_id == 9 and absbeta < 0.018:
        return 1
    elif region_id == 10 and absbeta < 0.024:
        return 1
    elif region_id == 11 and absbeta < 0.030:
        return 1
    elif region_id == 12 and absbeta < 0.032:
        return 1
    elif region_id == 13 and absbeta < 0.020:
        return 1
    elif region_id == 14 and absbeta < 0.022:
        return 1
    elif region_id == 15 and absbeta < 0.018:
        return 1
    elif region_id == 16 and absbeta < 0.022:
        return 1
    elif region_id == 17 and absbeta < 0.034:
        return 1
    elif region_id == 18 and absbeta < 0.030:
        return 1
    elif region_id == 19 and absbeta < 0.034:
        return 1
    elif region_id == 20 and absbeta < 0.026:
        return 1
    elif region_id == 21 and absbeta < 0.022:
        return 1
    elif region_id == 22 and absbeta < 0.022:
        return 1
    elif region_id == 23 and absbeta < 0.022:
        return 1
    elif region_id == 24 and absbeta < 0.028:
        return 1
    elif region_id == 25 and absbeta < 0.032:
        return 1
    elif region_id == 26 and absbeta < 0.026:
        return 1
    elif region_id == 27 and absbeta < 0.020:
        return 1
    elif region_id == 28 and absbeta < 0.018:
        return 1
    elif region_id == 29 and absbeta < 0.014:
        return 1
    elif region_id == 30 and absbeta < 0.038:
        return 1
    elif region_id == 31 and absbeta < 0.034:
        return 1
    elif region_id == 32 and absbeta < 0.026:
        return 1
    elif region_id == 33 and absbeta < 0.022:
        return 1
    elif region_id == 34 and absbeta < 0.018:
        return 1
    elif region_id == 35 and absbeta < 0.034:
        return 1
    elif region_id == 36 and absbeta < 0.030:
        return 1
    elif region_id == 37 and absbeta < 0.024:
        return 1
    elif region_id == 38 and absbeta < 0.024:
        return 1
    elif region_id == 39 and absbeta < 0.030:
        return 1
    elif region_id == 40 and absbeta < 0.030:
        return 1
    elif region_id == 41 and absbeta < 0.026:
        return 1
    elif region_id == 42 and absbeta < 0.026:
        return 1
    elif region_id == 43 and absbeta < 0.022:
        return 1
    elif region_id == 44 and absbeta < 0.022:
        return 1
    elif region_id == 45 and absbeta < 0.036:
        return 1
    elif region_id == 46 and absbeta < 0.036:
        return 1
    elif region_id == 47 and absbeta < 0.028:
        return 1
    elif region_id == 48 and absbeta < 0.034:
        return 1
    elif region_id == 49 and absbeta < 0.032:
        return 1
    elif region_id == 50 and absbeta < 0.028:
        return 1
    elif region_id == 51 and absbeta < 0.032:
        return 1
    elif region_id == 52 and absbeta < 0.034:
        return 1
    elif region_id == 53 and absbeta < 0.030:
        return 1
    elif region_id == 54 and absbeta < 0.024:
        return 1
    elif region_id == 55 and absbeta < 0.030:
        return 1
    elif region_id == 56 and absbeta < 0.028:
        return 1
    elif region_id == 57 and absbeta < 0.026:
        return 1
    elif region_id == 58 and absbeta < 0.026:
        return 1
    elif region_id == 59 and absbeta < 0.026:
        return 1
    return 0
