module lieat_general_radix_4_sign_coder #(
	// Put some parameters here, which can be changed by other modules.
	
)(
	input  logic sd_m_neg_1_sign_i,
	input  logic sd_m_neg_0_sign_i,
	input  logic sd_m_pos_1_sign_i,
	input  logic sd_m_pos_2_sign_i,
	output logic [5-1:0] quot_o
);

// ==================================================================================================================================================
// (local) params
// ==================================================================================================================================================

localparam QUOT_NEG_2 = 0;
localparam QUOT_NEG_1 = 1;
localparam QUOT_ZERO  = 2;
localparam QUOT_POS_1 = 3;
localparam QUOT_POS_2 = 4;

logic [4-1:0] sign;

// ==================================================================================================================================================
// main codes
// ==================================================================================================================================================

// Just look at "TABLE 2" in 
// "Digit-Recurrence Dividers with Reduced Logical Depth", Elisardo Antelo.
assign sign = {sd_m_pos_2_sign_i, sd_m_pos_1_sign_i, sd_m_neg_0_sign_i, sd_m_neg_1_sign_i};
assign quot_o[QUOT_POS_2] = (sign[3:1] == 3'b000);
assign quot_o[QUOT_POS_1] = (sign[3:1] == 3'b100);
assign quot_o[QUOT_ZERO ] = (sign[2:1] == 2'b10);
assign quot_o[QUOT_NEG_1] = (sign[2:0] == 3'b110);
assign quot_o[QUOT_NEG_2] = (sign[2:0] == 3'b111);

endmodule
