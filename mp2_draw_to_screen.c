int buf_indx = 0;
for(i = 0; i < 16; i++){
	tmp_addr = addr;
	for(k = 0; k < 40; k++)}
		for(j = 0; j < 8; j++){
			addr[p_off * SCROLL_SIZE] = buf[buf_indx];
			buf_indx += 1;
			if(--p_off < 0){
				p_off = 3;
				addr++;
			}
		}
	}
	addr = tmp_addr;
	addr += IMAGE_X_WIDTH;
}
