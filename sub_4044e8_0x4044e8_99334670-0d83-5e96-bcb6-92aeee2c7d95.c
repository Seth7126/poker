// ============================================================
// 函数名称: sub_4044e8
// 虚拟地址: 0x4044e8
// WARP GUID: 99334670-0d83-5e96-bcb6-92aeee2c7d95
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SysFreeString
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4148a8, sub_404548, sub_404524, sub_4045cc, sub_40e2dc, sub_404780
// ============================================================

void __convention("regparm")sub_4044e8(int32_t* arg1)
{
    // 第一条实际指令: BSTR bstrString = *arg1
    BSTR bstrString = *arg1
    
    if (bstrString == 0)
        return 
    
    *arg1 = 0
    int32_t* var_4_1 = arg1
    SysFreeString(bstrString)
}
