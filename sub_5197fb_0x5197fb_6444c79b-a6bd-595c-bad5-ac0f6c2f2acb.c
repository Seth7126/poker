// ============================================================
// 函数名称: sub_5197fb
// 虚拟地址: 0x5197fb
// WARP GUID: 6444c79b-a6bd-595c-bad5-ac0f6c2f2acb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_409040, sub_404138, sub_44cde0, sub_40423c, sub_402824, sub_402bdc, j_sub_406190, sub_405e46, sub_404280, sub_403010, sub_403e1c, sub_403e90, sub_404078, sub_52b40c, sub_404188, sub_51974c, sub_405fdc, sub_449520, sub_4033d0, sub_4040c4, sub_408e1c, sub_403df8, sub_405f4c, sub_404464, sub_406168
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_5197fb(char* arg1, int32_t arg2, int32_t* arg3, void* arg4 @ ebp, int32_t arg5 @ esi, int32_t arg6 @ edi)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    char* entry_ebx
    *entry_ebx += arg1:1.b
    *arg1 += arg1.b
    *(arg4 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2.w, eflags)
    int32_t i_2 = 0x62
    int32_t esp
    int32_t i
    
    do
        *(esp - 4) = 0
        *(esp - 8) = 0
        esp -= 8
        i = i_2
        i_2 -= 1
    while (i != 1)
    *(esp - 4) = entry_ebx
    *(esp - 8) = arg5
    *(esp - 0xc) = arg6
    int32_t esp_4 = esp - 0xc
    
    if (arg2.b != 0)
        esp_4 -= 0x10
        arg1 = sub_4033d0(i_2, arg2)
    
    *(arg4 - 9) = arg2.b
    *(arg4 - 8) = arg1
    *(esp_4 - 4) = arg4
    *(esp_4 - 8) = j_sub_4037f0
    TEB* fsbase
    *(esp_4 - 0xc) = fsbase->NtTib.ExceptionList
    void* esp_7 = esp_4 - 0xc
    fsbase->NtTib.ExceptionList = esp_7
    
    for (int32_t i_1 = 1; i_1 != 8; i_1 += 1)
        sub_408e1c(i_1, arg4 - 0x1f0)
        sub_4040c4(arg4 - 0x20, U"2", *(arg4 - 0x1f0))
        *(esp_7 - 4) = *(*data_530304 + 0xa64)
        *(esp_7 - 8) = "\data\sound\"
        *(esp_7 - 0xc) = *(arg4 - 0x20)
        *(esp_7 - 0x10) = "\codes.txt"
        sub_404138(arg4 - 0x10, 4)
        esp_7 -= 4
        
        if (sub_409040(*(arg4 - 0x10)) == 0)
            *(esp_7 - 4) = "SCReader.Create: Datei "
            *(esp_7 - 8) = *(arg4 - 0x10)
            *(esp_7 - 0xc) = " dont exist!"
            sub_404138(arg4 - 0x1f4, 3)
            *(arg4 - 0x1f4)
            sub_44cde0()
        else
            sub_403df8(arg4 - 4)
            sub_405e46(arg4 - 0x1ec, *(arg4 - 0x10))
            int32_t eax_10
            int32_t ecx_1
            eax_10, ecx_1 = j_sub_406190()
            sub_402824(eax_10)
            void* eax_16
            
            do
                sub_404464(ecx_1, arg4 - 0x14)
                sub_402824(sub_406168(arg4 - 0x1ec))
                *(esp_7 - 4) = *(arg4 - 4)
                *(esp_7 - 8) = *(arg4 - 0x14)
                *(esp_7 - 0xc) = &data_519c14
                sub_404138(arg4 - 4, 3)
                eax_16, ecx_1 = sub_405fdc(arg4 - 0x1ec)
                sub_402824(eax_16)
            while (eax_16.b == 0)
            sub_402824(sub_405f4c(arg4 - 0x1ec))
        
        for (int32_t j = 0xa; j != 0x2b; j += 1)
            char eax_22
            void* edx_3
            eax_22, edx_3 = sub_409040(*(arg4 - 0x10))
            
            if (eax_22 == 0)
                bool o_7 = unimplemented  {imul eax, edi, 0x21}
                
                if (o_7)
                    sub_403010()
                    noreturn
                
                *(*(arg4 - 8) + i_1 * 0x84 + (j << 2) + 0x1b160) = 0
            else
                *(esp_7 - 4) = arg4
                void* edx_4
                edx_4, arg4 = sub_51974c(arg4 - 0x1f8, edx_3)
                *(esp_7 - 4)
                int32_t ebx = 0
                
                do
                    int32_t temp1_1 = ebx
                    ebx += 1
                    
                    if (add_overflow(temp1_1, 1))
                        sub_403010()
                        noreturn
                    
                    *(esp_7 - 4) = arg4
                    arg4, j = sub_51974c(arg4 - 0x1fc, edx_4)
                    *(esp_7 - 4)
                    sub_403e90(arg4 - 0x18, *(arg4 - 0x1fc))
                    sub_404054(arg4 - 0x2fc, *(arg4 - 0x18), 0xff)
                    edx_4 = arg4 - 0x2fc
                    bool o_2 = unimplemented  {imul eax, edi, 0x3e01}
                    
                    if (o_2)
                        sub_403010()
                        noreturn
                    
                    *(esp_7 - 4) = *(arg4 - 8) + i_1 * 0x3e01
                    bool o_3 = unimplemented  {imul eax, esi, 0x1e1}
                    
                    if (o_3)
                        sub_403010()
                        noreturn
                    
                    *(esp_7 - 4) += j * 0x1e1
                    bool o_4 = unimplemented  {imul eax, ebx, 0x25}
                    
                    if (o_4)
                        sub_403010()
                        noreturn
                    
                    int32_t ecx_6
                    ecx_6.b = 0x24
                    sub_402bdc(*(esp_7 - 4) + ebx * 0x25 - 0x50ec, edx_4, ecx_6.b)
                    int32_t eax_34 = sub_404078(*(arg4 - 0x18))
                    
                    if (eax_34 s> 1)
                        edx_4 = sub_404188(*(arg4 - 0x18), 0x519c58)
                        
                        if (eax_34 != 1)
                            *(esp_7 - 4) = arg4 - 0x300
                            sub_404280(1, 1, *(arg4 - 0x18))
                            edx_4 = sub_404188(*(arg4 - 0x300), 0x519c64)
                            
                            if (eax_34 != 1)
                                *(esp_7 - 4) = *(*data_530304 + 0xa64)
                                *(esp_7 - 8) = "\data\sound\"
                                *(esp_7 - 0xc) = *(arg4 - 0x20)
                                *(esp_7 - 0x10) = &data_519c70
                                arg4, i_1 = sub_52b40c(*(arg4 - 0x18), arg4 - 0x304)
                                *(esp_7 - 0x14) = *(arg4 - 0x304)
                                *(esp_7 - 0x18) = ".wav"
                                sub_404138(arg4 - 0x1c, 6)
                                esp_7 -= 0xc
                                char eax_45
                                eax_45, edx_4 = sub_409040(*(arg4 - 0x1c))
                                
                                if (eax_45 == 0)
                                    *(esp_7 - 4) = 4
                                    *(esp_7 - 8) = "SCReader.Create("
                                    *(esp_7 - 0xc) = *(arg4 - 0x20)
                                    *(esp_7 - 0x10) = &data_519ca8
                                    sub_408e1c(j, arg4 - 0x30c)
                                    *(esp_7 - 0x14) = *(arg4 - 0x30c)
                                    *(esp_7 - 0x18) = &data_519ca8
                                    sub_408e1c(ebx, arg4 - 0x310)
                                    *(esp_7 - 0x1c) = *(arg4 - 0x310)
                                    *(esp_7 - 0x20) = &data_519cb4
                                    *(esp_7 - 0x24) = *(arg4 - 0x1c)
                                    *(esp_7 - 0x28) = " dont exist. Continue?"
                                    sub_404138(arg4 - 0x308, 9)
                                    esp_7 -= 0x1c
                                    int32_t eax_50 = sub_40423c(*(arg4 - 0x308))
                                    int32_t eax_53
                                    eax_53, edx_4, j, i_1 = sub_449520(*data_530660, eax_50, "Error")
                                    
                                    if (eax_53 != 6)
                                        edx_4.b = 1
                                        edx_4 = (*(**data_530660 - 4))()
                    
                    if (ebx s>= 0xd)
                        break
                while (*(arg4 - 0x18) != 0)
                
                bool o_5 = unimplemented  {imul eax, edi, 0x21}
                
                if (o_5)
                    sub_403010()
                    noreturn
                
                if (add_overflow(ebx, 0xffffffff))
                    sub_403010()
                    noreturn
                
                *(*(arg4 - 8) + i_1 * 0x84 + (j << 2) + 0x1b160) = ebx - 1
    
    *(esp_7 + 8)
    fsbase->NtTib.ExceptionList = *esp_7
    *(esp_7 + 8) = sub_519baf
    sub_403e1c(arg4 - 0x310, 5)
    sub_403e1c(arg4 - 0x1fc, 4)
    sub_403e1c(arg4 - 0x20, 5)
    sub_403df8(arg4 - 4)
    return arg4 - 4
}
