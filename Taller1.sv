module Taller1(input logic	clk,rst_n,
						input logic switch,switch2,btn, 
						output logic[6:0] seg0,seg1,seg2,seg3,seg4,seg5, output logic[2:0] leds);
platform plat
(
	.clk_clk(clk),
	.pio_0_external_connection_export(leds),
	.leds_external_connection_export(seg0),
	.seven_seg1_external_connection_export(seg1),
	.seven_seg2_external_connection_export(seg2),
	.seven_seg3_external_connection_export(seg3),
	.seven_seg4_external_connection_export(seg4),
	.seven_seg5_external_connection_export(seg5),
	.switch_external_connection_export(switch),
	.switch2_external_connection_export(switch2),
	.btn_external_connection_export(btn),
	.reset_reset_n(rst_n)
);

endmodule