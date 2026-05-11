// ============================================================
// 函数名称: sub_41ec48
// 虚拟地址: 0x41ec48
// WARP GUID: c34dca43-154d-56a0-90fa-18dac0c5ecbb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetObjectA
// [内部子函数调用]: sub_41e5a0, sub_402d00, sub_41e2e0, sub_41d870
// [被调用的父级函数]: sub_491a48, sub_453ff8, sub_437168, sub_4b48f3, sub_43ab7c, sub_43a2fc
// ============================================================

void __convention("regparm")sub_41ec48(int32_t arg1, HGDIOBJ arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    void* esi = *(arg1 + 0x20)
    
    if (arg2 != *(esi + 8))
        sub_41e2e0(arg1)
        void var_5c
        sub_402d00(&var_5c, 0x54, 0)
        HGDIOBJ ExceptionList
        
        if (arg2 != 0)
            void* pv = &var_5c
            int32_t c = 0x54
            ExceptionList = arg2
            GetObjectA(ExceptionList, c, pv)
        
        HPALETTE var_8_1
        
        if (*(esi + 4) != 1)
            HGDIOBJ eax_3 = *(esi + 0x10)
            
            if (eax_3 != data_531654)
                var_8_1 = sub_41d870(eax_3)
            else
                var_8_1 = data_531654
        else
            var_8_1 = *(esi + 0x10)
            *(esi + 0x10) = 0
        
        int32_t* var_6c_1 = &var_4
        int32_t (* var_70_1)() = j_sub_40353c
        TEB* fsbase
        ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        int32_t* ebx_1
        ebx_1, ebp_1 = sub_41e5a0(arg1, arg2, var_8_1, nullptr, 0, &var_5c)
        fsbase->NtTib.ExceptionList = ExceptionList
        (*(*ebx_1 + 0x10))()
    
    *ebp_1
}
