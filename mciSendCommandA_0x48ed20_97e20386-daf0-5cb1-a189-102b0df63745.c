// ============================================================
// 函数名称: mciSendCommandA
// 虚拟地址: 0x48ed20
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_49348c, sub_4933b0, sub_4937a4, sub_492e3c, sub_492b8c, sub_4935fc, sub_4936a0, sub_51aa14, sub_493af4, sub_492d64, sub_4919ca, sub_4939e0, sub_492fb0, sub_493a28, sub_493ab4, sub_492f1c, sub_492c54, sub_4931f4, sub_4936dc, sub_493064, sub_493a70, sub_493628, sub_4937f0, sub_49292c, sub_493550, sub_493848
// ============================================================

uint32_t __stdcallmciSendCommandA(uint32_t mciId, uint32_t uMsg, uint32_t dwParam1, uint32_t dwParam2)
{
    // 第一条实际指令: return mciSendCommandA(mciId, uMsg, dwParam1, dwParam2) __tailcall
    return mciSendCommandA(mciId, uMsg, dwParam1, dwParam2) __tailcall
}
