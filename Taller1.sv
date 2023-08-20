module Taller1(input logic	clk,rst_n,
						input logic switch, 
						output logic[9:0] leds);
platform plat
(
	.clk_clk(clk),
	.leds_external_connection_export(leds),
	.switch_external_connection_export(switch),
	.reset_reset_n(rst_n)
);

endmodule