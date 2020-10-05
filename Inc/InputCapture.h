
#define TIM_ADDR 0x40000000
#define GPIOA_ADDR 0x48000000
#define RCC_ADDR 0x40021000
#define RCC_CFGR 0x40021004
#define PWR 0x40007000
#define RCC_ADDR_BDCR 0x40021020
#define RCC_ENGPIO_ADDR 0x40021014
#define RCC_ENTIM2_ADDR 0x4002101C
#define GPIOC_ADDR 0x48000800

typedef struct
{
	uint32_t mode;
	uint32_t type;
	uint32_t speed;
	uint32_t pupd;
	uint32_t idr;
	uint32_t odr;
	uint32_t bsrr;
	uint32_t lckr;
	uint32_t afrl;
	uint32_t afrh;
}Gpio_t;

typedef struct
{
	uint32_t CR1;
	uint32_t CR2;
	uint32_t SMCR;
	uint32_t DIER;
	uint32_t SR;
	uint32_t EGR;
	uint32_t CCMR1;
	uint32_t CCMR2;
	uint32_t CCER;
	uint32_t CNT;
	uint32_t PSC;
	uint32_t ARR;
	uint32_t reserved;
	uint32_t CCR1;
	uint32_t CCR2;
}Tim_t;
