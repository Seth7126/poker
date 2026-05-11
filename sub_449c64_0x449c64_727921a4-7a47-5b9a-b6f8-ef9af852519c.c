// ============================================================
// 函数名称: sub_449c64
// 虚拟地址: 0x449c64
// WARP GUID: 727921a4-7a47-5b9a-b6f8-ef9af852519c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: IsChild
// [内部子函数调用]: sub_449c08, sub_431bcc, sub_447224, sub_4318d0, sub_447210
// [被调用的父级函数]: sub_447294, sub_4472cc, sub_445ad4
// ============================================================

void* __convention("regparm")sub_449c64(void* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* result = arg1
    
    if (*(result + 0x24) != 0)
        int32_t esi_2 = sub_447224(data_5317dc) - 1
        int32_t __saved_ebp
        void* edx
        
        if (esi_2 s< 0)
        label_449cda:
            int32_t* var_18_3 = &__saved_ebp
            result = sub_449c08(0, edx)
        else
            int32_t esi_3 = esi_2 + 1
            void* edi_1 = nullptr
            
            while (true)
                edx = edi_1
                BOOL ebx_1 = sub_447210(data_5317dc, edx)
                
                if (*(ebx_1 + 0x47) != 0)
                    BOOL eax_3
                    
                    if (*(ebx_1 + 0x164) == 0)
                    label_449ccb:
                        int32_t* var_18_2 = &__saved_ebp
                        eax_3.b = 1
                        result = sub_449c08(eax_3.b, edx)
                        break
                    
                    if (sub_431bcc(ebx_1).b != 0)
                        goto label_449ccb
                    
                    eax_3, edx = IsChild(sub_4318d0(ebx_1), *(ebx_1 + 0x164))
                    
                    if (eax_3 == 0)
                        goto label_449ccb
                
                edi_1 += 1
                int32_t temp0_1 = esi_3
                esi_3 -= 1
                
                if (temp0_1 == 1)
                    goto label_449cda
    
    return result
}
