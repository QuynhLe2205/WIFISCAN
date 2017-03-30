typedef struct{
	unsigned char MAC[6];	// 6 bytes of MAC address of AP
	int channel;		// channel number 1-13
	double frequency;	// frequency of this channel
	char essid[100];	// ESSID of the network
	double slevel;		// signal level in dBm
}WIFI_INFO;

#define DEBUG
#define CMD "sudo iwlist wlan0 scan | egrep \"Address|Frequency|ESSID|Quality\" > scan.txt"

// function prototypes
void read_data(void);
void get_MAC(char [], char []);	// reads MAC address if AP from 1st line
void remove_spaces(char []);	// removes leading spaces of a string/line
double get_frequency(char []);	// reads carrier frequency from 2nd line
double get_slevel(char []);	// reads signal level from 3rd line
void get_essid(char [], char[]);// reads ESSID from the 4th line
