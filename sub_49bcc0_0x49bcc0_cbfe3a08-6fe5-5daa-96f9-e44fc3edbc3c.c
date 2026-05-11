// ============================================================
// 函数名称: sub_49bcc0
// 虚拟地址: 0x49bcc0
// WARP GUID: cbfe3a08-6fe5-5daa-96f9-e44fc3edbc3c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40423c, sub_403fb0, sub_49ada4
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_49bcc0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    var_8 = (*data_5307dc)(sub_40423c(arg2))
    int32_t* eax_7
    int32_t ecx
    eax_7, ecx = (*data_5307b8)(&var_8, 4, 2)
    
    if (eax_7 == 0)
        return sub_49ada4()
    
    sub_403fb0(ecx, *eax_7)
    return arg1
}
