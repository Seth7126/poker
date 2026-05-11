// ============================================================
// 函数名称: sub_519804
// 虚拟地址: 0x519804
// WARP GUID: cf5691f7-35b0-5b05-babd-6a4455771246
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_409040, sub_404138, sub_44cde0, sub_40423c, sub_402824, sub_402bdc, j_sub_406190, sub_405e46, sub_404280, sub_403010, sub_403e1c, sub_403e90, sub_404078, sub_52b40c, sub_404188, sub_51974c, sub_405fdc, sub_449520, sub_4033d0, sub_4040c4, sub_408e1c, sub_403df8, sub_405f4c, sub_404464, sub_406168
// [被调用的父级函数]: sub_4e548c
// ============================================================

void* __fastcallsub_519804(int32_t arg1, int32_t arg2, int32_t arg3 @ esi, int32_t arg4 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    int32_t* ebp_1 = &var_4
    int32_t i_2 = 0x62
    int32_t i
    
    do
        *(esp_2 - 4) = 0
        *(esp_2 - 8) = 0
        esp_2 -= 8
        i = i_2
        i_2 -= 1
    while (i != 1)
    int32_t entry_ebx
    *(esp_2 - 4) = entry_ebx
    *(esp_2 - 8) = arg3
    *(esp_2 - 0xc) = arg4
    void* esp_5 = esp_2 - 0xc
    int32_t eax
    
    if (arg2.b != 0)
        esp_5 -= 0x10
        eax = sub_4033d0(i_2, arg2)
    
    char var_d = arg2.b
    int32_t var_c = eax
    *(esp_5 - 4) = &var_4
    *(esp_5 - 8) = j_sub_4037f0
    TEB* fsbase
    *(esp_5 - 0xc) = fsbase->NtTib.ExceptionList
    void* esp_8 = esp_5 - 0xc
    fsbase->NtTib.ExceptionList = esp_8
    
    for (int32_t i_1 = 1; i_1 != 8; i_1 += 1)
        sub_408e1c(i_1, &ebp_1[-0x7c])
        sub_4040c4(&ebp_1[-8], U"2", ebp_1[-0x7c])
        *(esp_8 - 4) = *(*data_530304 + 0xa64)
        *(esp_8 - 8) = "\data\sound\"
        *(esp_8 - 0xc) = ebp_1[-8]
        *(esp_8 - 0x10) = "\codes.txt"
        sub_404138(&ebp_1[-4], 4)
        esp_8 -= 4
        
        if (sub_409040(ebp_1[-4]) == 0)
            *(esp_8 - 4) = "SCReader.Create: Datei "
            *(esp_8 - 8) = ebp_1[-4]
            *(esp_8 - 0xc) = " dont exist!"
            sub_404138(&ebp_1[-0x7d], 3)
            ebp_1[-0x7d]
            sub_44cde0()
        else
            sub_403df8(&ebp_1[-1])
            sub_405e46(&ebp_1[-0x7b], ebp_1[-4])
            int32_t eax_11
            int32_t ecx_1
            eax_11, ecx_1 = j_sub_406190()
            sub_402824(eax_11)
            void* eax_17
            
            do
                sub_404464(ecx_1, &ebp_1[-5])
                sub_402824(sub_406168(&ebp_1[-0x7b]))
                *(esp_8 - 4) = ebp_1[-1]
                *(esp_8 - 8) = ebp_1[-5]
                *(esp_8 - 0xc) = &data_519c14
                sub_404138(&ebp_1[-1], 3)
                eax_17, ecx_1 = sub_405fdc(&ebp_1[-0x7b])
                sub_402824(eax_17)
            while (eax_17.b == 0)
            sub_402824(sub_405f4c(&ebp_1[-0x7b]))
        
        for (int32_t j = 0xa; j != 0x2b; j += 1)
            char eax_23
            void* edx_3
            eax_23, edx_3 = sub_409040(ebp_1[-4])
            
            if (eax_23 == 0)
                bool o_7 = unimplemented  {imul eax, edi, 0x21}
                
                if (o_7)
                    sub_403010()
                    noreturn
                
                *(ebp_1[-2] + i_1 * 0x84 + (j << 2) + 0x1b160) = 0
            else
                *(esp_8 - 4) = ebp_1
                char* edx_4
                edx_4, ebp_1 = sub_51974c(&ebp_1[-0x7e], edx_3)
                *(esp_8 - 4)
                int32_t ebx = 0
                
                do
                    int32_t temp1_1 = ebx
                    ebx += 1
                    
                    if (add_overflow(temp1_1, 1))
                        sub_403010()
                        noreturn
                    
                    *(esp_8 - 4) = ebp_1
                    ebp_1, j = sub_51974c(&ebp_1[-0x7f], edx_4)
                    *(esp_8 - 4)
                    sub_403e90(&ebp_1[-6], ebp_1[-0x7f])
                    sub_404054(&ebp_1[-0xbf], ebp_1[-6], 0xff)
                    edx_4 = &ebp_1[-0xbf]
                    bool o_2 = unimplemented  {imul eax, edi, 0x3e01}
                    
                    if (o_2)
                        sub_403010()
                        noreturn
                    
                    *(esp_8 - 4) = ebp_1[-2] + i_1 * 0x3e01
                    bool o_3 = unimplemented  {imul eax, esi, 0x1e1}
                    
                    if (o_3)
                        sub_403010()
                        noreturn
                    
                    *(esp_8 - 4) += j * 0x1e1
                    bool o_4 = unimplemented  {imul eax, ebx, 0x25}
                    
                    if (o_4)
                        sub_403010()
                        noreturn
                    
                    int32_t ecx_6
                    ecx_6.b = 0x24
                    sub_402bdc(*(esp_8 - 4) + ebx * 0x25 - 0x50ec, edx_4, ecx_6.b)
                    int32_t eax_35 = sub_404078(ebp_1[-6])
                    
                    if (eax_35 s> 1)
                        edx_4 = sub_404188(ebp_1[-6], 0x519c58)
                        
                        if (eax_35 != 1)
                            *(esp_8 - 4) = &ebp_1[-0xc0]
                            sub_404280(1, 1, ebp_1[-6])
                            edx_4 = sub_404188(ebp_1[-0xc0], 0x519c64)
                            
                            if (eax_35 != 1)
                                *(esp_8 - 4) = *(*data_530304 + 0xa64)
                                *(esp_8 - 8) = "\data\sound\"
                                *(esp_8 - 0xc) = ebp_1[-8]
                                *(esp_8 - 0x10) = &data_519c70
                                ebp_1, i_1 = sub_52b40c(ebp_1[-6], &ebp_1[-0xc1])
                                *(esp_8 - 0x14) = ebp_1[-0xc1]
                                *(esp_8 - 0x18) = ".wav"
                                sub_404138(&ebp_1[-7], 6)
                                esp_8 -= 0xc
                                char eax_46
                                eax_46, edx_4 = sub_409040(ebp_1[-7])
                                
                                if (eax_46 == 0)
                                    *(esp_8 - 4) = 4
                                    *(esp_8 - 8) = "SCReader.Create("
                                    *(esp_8 - 0xc) = ebp_1[-8]
                                    *(esp_8 - 0x10) = &data_519ca8
                                    sub_408e1c(j, &ebp_1[-0xc3])
                                    *(esp_8 - 0x14) = ebp_1[-0xc3]
                                    *(esp_8 - 0x18) = &data_519ca8
                                    sub_408e1c(ebx, &ebp_1[-0xc4])
                                    *(esp_8 - 0x1c) = ebp_1[-0xc4]
                                    *(esp_8 - 0x20) = &data_519cb4
                                    *(esp_8 - 0x24) = ebp_1[-7]
                                    *(esp_8 - 0x28) = " dont exist. Continue?"
                                    sub_404138(&ebp_1[-0xc2], 9)
                                    esp_8 -= 0x1c
                                    int32_t eax_51 = sub_40423c(ebp_1[-0xc2])
                                    int32_t eax_54
                                    eax_54, edx_4, j, i_1 = sub_449520(*data_530660, eax_51, "Error")
                                    
                                    if (eax_54 != 6)
                                        edx_4.b = 1
                                        edx_4 = (*(**data_530660 - 4))()
                    
                    if (ebx s>= 0xd)
                        break
                while (ebp_1[-6] != 0)
                
                bool o_5 = unimplemented  {imul eax, edi, 0x21}
                
                if (o_5)
                    sub_403010()
                    noreturn
                
                if (add_overflow(ebx, 0xffffffff))
                    sub_403010()
                    noreturn
                
                *(ebp_1[-2] + i_1 * 0x84 + (j << 2) + 0x1b160) = ebx - 1
    
    *(esp_8 + 8)
    fsbase->NtTib.ExceptionList = *esp_8
    *(esp_8 + 8) = sub_519baf
    sub_403e1c(&ebp_1[-0xc4], 5)
    sub_403e1c(&ebp_1[-0x7f], 4)
    sub_403e1c(&ebp_1[-8], 5)
    sub_403df8(&ebp_1[-1])
    return &ebp_1[-1]
}
