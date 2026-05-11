// ============================================================
// 函数名称: sub_404188
// 虚拟地址: 0x404188
// WARP GUID: 998fd940-f898-5b7c-92e6-c5ee29e0a638
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41b6a8, sub_43b5b8, sub_4cd720, sub_49e7f3, sub_42b7a8, sub_4fb834, sub_469254, sub_49d4fc, sub_4afc93, sub_41627c, sub_43ab7c, sub_41c688, sub_51038c, sub_4e649b, sub_4ed7a0, sub_473938, sub_436aac, sub_475d3c, sub_42b558, sub_4afc9c, sub_51a454, sub_483f98, sub_514468, sub_436d90, sub_43c92c, sub_510e64, sub_4fc3f8, sub_43c480, sub_4b498a, sub_4b48d8, sub_4116c8, sub_519df0, sub_42a78b, sub_52c7c8, sub_4a79a0, sub_484e24, sub_4ace9c, sub_468a6c, sub_468af3, sub_43a2fc, sub_4779d4, sub_4ec448, sub_5075fc, sub_52b8e8, sub_48c290, sub_497fb4, sub_4d7108, sub_4364c4, sub_436c1c, sub_51a838, sub_5207dc, sub_43c320, sub_50e9c0, sub_4807f4, sub_49e018, sub_468e30, sub_42d2c0, sub_4cca24, sub_4980b4, sub_49e7fc, sub_4dbf70, sub_471144, sub_43a0a4, sub_448f34, sub_4e6659, sub_50b624, sub_4ad27c, sub_43b7cc, sub_509ed4, sub_46910c, sub_424ac0, sub_52b63c, sub_4692db, sub_509890, sub_4e6028, sub_449b74, sub_52ba68, sub_519804, sub_4692e4, sub_49de5c, sub_468afc, sub_50f700, sub_439b68, sub_5197fb, sub_4981b4, sub_49df54, sub_4d8208, sub_46f698, sub_42a840, sub_488509, sub_43981c, sub_4b51e4, sub_4fc834, sub_51d840
// ============================================================

void __convention("regparm")sub_404188(void* arg1, void* arg2)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    void* edi = arg2
    
    if (arg1 == arg2)
        return 
    
    if (esi == 0)
        *(edi - 4)
    else if (edi == 0)
        *(esi - 4)
    else
        int32_t eax = *(esi - 4)
        void* edx = *(edi - 4)
        
        if (eax u<= edx)
            edx = eax
        
        uint32_t edx_1 = edx u>> 2
        
        if (edx_1 == 0)
        label_4041d8:
            
            if ((edx & 3) != 0)
                *esi
                *edi
        else
            while (true)
                int32_t ecx_1 = *esi
                int32_t ebx_1 = *edi
                
                if (ecx_1 == ebx_1)
                    int32_t edx_2 = edx_1 - 1
                    
                    if (edx_1 == 1)
                        esi += 4
                        edi += 4
                        goto label_4041d8
                    
                    ecx_1 = *(esi + 4)
                    ebx_1 = *(edi + 4)
                    
                    if (ecx_1 == ebx_1)
                        esi += 8
                        edi += 8
                        edx_1 = edx_2 - 1
                        
                        if (edx_2 == 1)
                            goto label_4041d8
                        
                        continue
                
                if (ecx_1.b != ebx_1.b)
                    break
                
                break
}
