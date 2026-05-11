// ============================================================
// 函数名称: sub_4050b4
// 虚拟地址: 0x4050b4
// WARP GUID: 17631188-8712-5c02-8e6e-ea1dc4f706cf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SysAllocStringLen
// [内部子函数调用]: sub_404cec, sub_4027e0
// [被调用的父级函数]: sub_4148a8
// ============================================================

uint32_t __convention("regparm")sub_4050b4(int16_t* arg1, wchar16* arg2)
{
    // 第一条实际指令: if (*arg1 u>= 8)
    if (*arg1 u>= 8)
        sub_404cec(arg1)
    
    uint32_t ui = 0
    
    if (arg2 != 0)
        ui = *(arg2 - 4) u>> 1
        
        if (ui != 0)
            ui = SysAllocStringLen(arg2, ui)
            
            if (ui == 0)
                ui.b = 1
                noreturn sub_4027e0(ui) __tailcall
    
    *arg1 = 8
    *(arg1 + 8) = ui
    return ui
}
